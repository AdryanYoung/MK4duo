/**
 * MK4duo Firmware for 3D Printer, Laser and CNC
 *
 * Based on Marlin, Sprinter and grbl
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 * Copyright (C) 2013 Alberto Cotronei @MagoKimbra
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef CARDREADER_H
#define CARDREADER_H

#if HAS_SDSUPPORT

  #define SD_MAX_FOLDER_DEPTH 10     // Maximum folder depth
  #define MAX_VFAT_ENTRIES (2)
  #define FILENAME_LENGTH 13
  /** Total size of the buffer used to store the long filenames */
  #define LONG_FILENAME_LENGTH (FILENAME_LENGTH * MAX_VFAT_ENTRIES + 1)
  #define SHORT_FILENAME_LENGTH 14
  #define GENBY_SIZE 16

  enum LsAction { LS_Count, LS_GetFilename };

  #include "SDFat.h"

  class CardReader {

    public: // PARAMETERS

      SdFat fat;
      SdFile gcode_file;
      SdBaseFile root,
                *curDir,
                 workDir,
                 lastDir,
                 workDirParents[SD_MAX_FOLDER_DEPTH];

      #if ENABLED(SD_SETTINGS)
        SdFile settings_file;
      #endif

      bool saving,
           sdprinting,
           cardOK,
           filenameIsDir;

      uint32_t fileSize,
               sdpos;

      float objectHeight,
            firstlayerHeight,
            layerHeight,
            filamentNeeded;

      char fileName[LONG_FILENAME_LENGTH * SD_MAX_FOLDER_DEPTH + SD_MAX_FOLDER_DEPTH + 1],
           tempLongFilename[LONG_FILENAME_LENGTH + 1],
           generatedBy[GENBY_SIZE];

    public: // FUNCTIONS

      CardReader();

      void mount();
      void unmount();
      void ls();
      void getfilename(uint16_t nr, const char* const match = NULL);
      void startFileprint();
      void openAndPrintFile(const char* name);
      void stopSDPrint(const bool store_location=false);
      void write_command(char* buf);
      bool selectFile(const char* filename);
      void printStatus();
      void startWrite(char* filename, const bool silent=false);
      void deleteFile(char* filename);
      void finishWrite();
      void makeDirectory(char* filename);
      void closeFile(const bool store_location = false);
      void printingHasFinished();
      void chdir(const char* relpath);
      void updir();
      void setroot();
      void setlast();

      #if HAS_EEPROM_SD
        bool write_data(SdFile* currentfile, const uint8_t value);
        uint8_t read_data(SdFile* currentfile);
      #endif

      void ResetDefault();
      void PrintSettings();

      #if ENABLED(SD_SETTINGS)
        #define CFG_SD_MAX_KEY_LEN    3+1         // increase this if you add key name longer than the actual value.
        #define CFG_SD_MAX_VALUE_LEN  10+1        // this should be enough for int, long and float: if you need to retrieve strings increase this carefully
        //(11 = strlen("4294967295")+1) (4294967295 = (2^32)-1) (32 = the num of bits of the bigger basic data structure used)
        //If you need to save string increase this to strlen("YOUR LONGER STRING")+1
        void StoreSettings();
        void RetrieveSettings(bool addValue = false);
        void parseKeyLine(char* key, char* value, int &len_k, int &len_v);
        void unparseKeyLine(const char* key, char* value);
        int  KeyIndex(char* key);
      #else
        inline void RetrieveSettings() { ResetDefault(); }
      #endif

      uint16_t getnrfilenames();

      FORCE_INLINE void pauseSDPrint() { sdprinting = false; }
      FORCE_INLINE void setIndex(uint32_t newpos) { sdpos = newpos; gcode_file.seekSet(sdpos); }
      FORCE_INLINE bool isFileOpen() { return gcode_file.isOpen(); }
      FORCE_INLINE bool eof() { return sdpos >= fileSize; }
      FORCE_INLINE int16_t get() { sdpos = gcode_file.curPosition(); return (int16_t)gcode_file.read(); }
      FORCE_INLINE uint8_t percentDone() { return (isFileOpen() && fileSize) ? sdpos / ((fileSize + 99) / 100) : 0; }
      FORCE_INLINE char* getWorkDirName() { workDir.getFilename(fileName); return fileName; }

      //files init.g on the sd card are performed in a row
      //this is to delay autostart and hence the initialization of the sd card to some seconds after the normal init, so the device is available quickly after a reset
      void checkautostart(bool x);

      static void printEscapeChars(const char* s);

    private: // PARAMETERS

      Sd2Card card;

      uint16_t workDirDepth;
      millis_t next_autostart_ms;
      uint16_t nrFiles; // counter for the files in the current directory and recycled as position counter for getting the nrFiles'th name in the directory.
      LsAction lsAction; //stored for recursion.
      bool autostart_stilltocheck; //the sd start is delayed, because otherwise the serial cannot answer fast enought to make contact with the hostsoftware.

    private: // FUNCTIONS

      void lsDive(SdBaseFile parent, const char* const match = NULL);
      void parsejson(SdBaseFile &parser_file);
      bool findGeneratedBy(char* buf, char* genBy);
      bool findFirstLayerHeight(char* buf, float &firstlayerHeight);
      bool findLayerHeight(char* buf, float &layerHeight);
      bool findFilamentNeed(char* buf, float &filament);
      bool findTotalHeight(char* buf, float &objectHeight);
  };

  extern CardReader card;

  #define IS_SD_PRINTING (card.sdprinting)
  #define IS_SD_FILE_OPEN (card.isFileOpen())

  #if PIN_EXISTS(SD_DETECT)
    #if ENABLED(SD_DETECT_INVERTED)
      #define IS_SD_INSERTED (READ(SD_DETECT_PIN) != 0)
    #else
      #define IS_SD_INSERTED (READ(SD_DETECT_PIN) == 0)
    #endif
  #else
    //No card detect line? Assume the card is inserted.
    #define IS_SD_INSERTED true
  #endif

#else

  #define IS_SD_PRINTING (false)
  #define IS_SD_FILE_OPEN (false)

#endif //SDSUPPORT

#endif //__CARDREADER_H
