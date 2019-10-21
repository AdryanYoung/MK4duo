/**
 * MK4duo Firmware for 3D Printer, Laser and CNC
 *
 * Based on Marlin, Sprinter and grbl
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 * Copyright (c) 2019 Alberto Cotronei @MagoKimbra
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
#pragma once

/**
 * Czech
 * UTF-8 for Graphical Display
 *
 * LCD Menu Messages
 *
 * Translated by Petr Zahradnik, Computer Laboratory
 * Blog and video blog Zahradnik se bavi
 * http://www.zahradniksebavi.cz
 *
 */

#define DISPLAY_CHARSET_ISO10646_CZ

namespace Language_cz {
  using namespace Language_en; // Inherit undefined strings from English

  constexpr uint8_t    CHARSIZE                            = 2;
  PROGMEM Language_Str LANGUAGE                            = _UxGT("Czech");

  PROGMEM Language_Str WELCOME_MSG                         = MACHINE_NAME _UxGT(" pripraven.");
  PROGMEM Language_Str MSG_YES                             = _UxGT("ANO");
  PROGMEM Language_Str MSG_NO                              = _UxGT("NE");
  PROGMEM Language_Str MSG_BACK                            = _UxGT("Zpet");
  PROGMEM Language_Str MSG_MEDIA_INSERTED                  = _UxGT("Karta vlo�ena");
  PROGMEM Language_Str MSG_MEDIA_REMOVED                   = _UxGT("Karta vyjmuta");
  PROGMEM Language_Str MSG_LCD_ENDSTOPS                    = _UxGT("Endstopy"); // max 8 znaku
  PROGMEM Language_Str MSG_LCD_SOFT_ENDSTOPS               = _UxGT("Soft Endstopy");
  PROGMEM Language_Str MSG_MAIN                            = _UxGT("Hlavn� nab�dka");
  PROGMEM Language_Str MSG_ADVANCED_SETTINGS               = _UxGT("Dal�� nastaven�");
  PROGMEM Language_Str MSG_CONFIGURATION                   = _UxGT("Konfigurace");
  PROGMEM Language_Str MSG_AUTOSTART                       = _UxGT("Autostart");
  PROGMEM Language_Str MSG_DISABLE_STEPPERS                = _UxGT("Uvolnit motory");
  PROGMEM Language_Str MSG_DEBUG_MENU                      = _UxGT("Nab�dka laden�");
  #if LCD_WIDTH >= 20
    PROGMEM Language_Str MSG_PROGRESS_BAR_TEST             = _UxGT("Test ukaz. prubehu");
  #else
    PROGMEM Language_Str MSG_PROGRESS_BAR_TEST             = _UxGT("Test uk. prubehu");
  #endif
  PROGMEM Language_Str MSG_AUTO_HOME                       = _UxGT("Domovsk� pozice");
  PROGMEM Language_Str MSG_AUTO_HOME_X                     = _UxGT("Domu osa X");
  PROGMEM Language_Str MSG_AUTO_HOME_Y                     = _UxGT("Domu osa Y");
  PROGMEM Language_Str MSG_AUTO_HOME_Z                     = _UxGT("Domu osa Z");
  PROGMEM Language_Str MSG_AUTO_Z_ALIGN                    = _UxGT("Auto srovn�n� Z");
  PROGMEM Language_Str MSG_LEVEL_BED_HOMING                = _UxGT("Meren� podlo�ky");
  PROGMEM Language_Str MSG_LEVEL_BED_WAITING               = _UxGT("Kliknut�m spustte");
  PROGMEM Language_Str MSG_LEVEL_BED_NEXT_POINT            = _UxGT("Dal�� bod");
  PROGMEM Language_Str MSG_LEVEL_BED_DONE                  = _UxGT("Meren� hotovo!");
  PROGMEM Language_Str MSG_Z_FADE_HEIGHT                   = _UxGT("V��ka srovn�v�n�");
  PROGMEM Language_Str MSG_SET_HOME_OFFSETS                = _UxGT("Nastavit ofsety");
  PROGMEM Language_Str MSG_HOME_OFFSETS_APPLIED            = _UxGT("Ofsety nastaveny");
  PROGMEM Language_Str MSG_SET_ORIGIN                      = _UxGT("Nastavit poc�tek");
  PROGMEM Language_Str MSG_PREHEAT_1                       = _UxGT("Zahr�t ") PREHEAT_1_LABEL;
  PROGMEM Language_Str MSG_PREHEAT_1_H                     = _UxGT("Zahr�t ") PREHEAT_1_LABEL " ~";
  PROGMEM Language_Str MSG_PREHEAT_1_END                   = _UxGT("Zahr�t ") PREHEAT_1_LABEL _UxGT(" end");
  PROGMEM Language_Str MSG_PREHEAT_1_END_E                 = _UxGT("Zahr�t ") PREHEAT_1_LABEL _UxGT(" end ~");
  PROGMEM Language_Str MSG_PREHEAT_1_ALL                   = _UxGT("Zahr�t ") PREHEAT_1_LABEL _UxGT(" v�e");
  PROGMEM Language_Str MSG_PREHEAT_1_BEDONLY               = _UxGT("Zahr�t ") PREHEAT_1_LABEL _UxGT(" podlo�");
  PROGMEM Language_Str MSG_PREHEAT_1_SETTINGS              = _UxGT("Zahr�t ") PREHEAT_1_LABEL _UxGT(" nast");
  PROGMEM Language_Str MSG_PREHEAT_2                       = _UxGT("Zahr�t ") PREHEAT_2_LABEL;
  PROGMEM Language_Str MSG_PREHEAT_2_H                     = _UxGT("Zahr�t ") PREHEAT_2_LABEL " ~";
  PROGMEM Language_Str MSG_PREHEAT_2_END                   = _UxGT("Zahr�t ") PREHEAT_2_LABEL _UxGT(" end");
  PROGMEM Language_Str MSG_PREHEAT_2_END_E                 = _UxGT("Zahr�t ") PREHEAT_2_LABEL _UxGT(" end ~");
  PROGMEM Language_Str MSG_PREHEAT_2_ALL                   = _UxGT("Zahr�t ") PREHEAT_2_LABEL _UxGT(" v�e");
  PROGMEM Language_Str MSG_PREHEAT_2_BEDONLY               = _UxGT("Zahr�t ") PREHEAT_2_LABEL _UxGT(" podlo�");
  PROGMEM Language_Str MSG_PREHEAT_2_SETTINGS              = _UxGT("Zahr�t ") PREHEAT_2_LABEL _UxGT(" nast");
  PROGMEM Language_Str MSG_PREHEAT_CUSTOM                  = _UxGT("Zahr�t vlastn�");
  PROGMEM Language_Str MSG_COOLDOWN                        = _UxGT("Zchladit");
  PROGMEM Language_Str MSG_LASER_MENU                      = _UxGT("Ovl�d�n� laseru");
  PROGMEM Language_Str MSG_LASER_OFF                       = _UxGT("Vypnout laser");
  PROGMEM Language_Str MSG_LASER_ON                        = _UxGT("Zapnout laser");
  PROGMEM Language_Str MSG_LASER_POWER                     = _UxGT("V�kon laseru");
  PROGMEM Language_Str MSG_SPINDLE_REVERSE                 = _UxGT("Vreteno opacne");
  PROGMEM Language_Str MSG_SWITCH_PS_ON                    = _UxGT("Zapnout nap�jen�");
  PROGMEM Language_Str MSG_SWITCH_PS_OFF                   = _UxGT("Vypnout nap�jen�");
  PROGMEM Language_Str MSG_EXTRUDE                         = _UxGT("Vytlacit (extr.)");
  PROGMEM Language_Str MSG_RETRACT                         = _UxGT("Zatlacit (retr.)");
  PROGMEM Language_Str MSG_MOVE_AXIS                       = _UxGT("Posunout osy");
  PROGMEM Language_Str MSG_BED_LEVELING                    = _UxGT("Vyrovnat podlo�ku");
  PROGMEM Language_Str MSG_LEVEL_BED                       = _UxGT("Vyrovnat podlo�ku");
  PROGMEM Language_Str MSG_LEVEL_CORNERS                   = _UxGT("Vyrovnat rohy");
  PROGMEM Language_Str MSG_NEXT_CORNER                     = _UxGT("Dal�� roh");
  PROGMEM Language_Str MSG_EDIT_MESH                       = _UxGT("Upravit s�t bodu");
  PROGMEM Language_Str MSG_EDITING_STOPPED                 = _UxGT("Konec �prav s�te");
  PROGMEM Language_Str MSG_MESH_X                          = _UxGT("Index X");
  PROGMEM Language_Str MSG_MESH_Y                          = _UxGT("Index Y");
  PROGMEM Language_Str MSG_MESH_EDIT_Z                     = _UxGT("Hodnota Z");

  PROGMEM Language_Str MSG_USER_MENU                       = _UxGT("Vlastn� pr�kazy");
  PROGMEM Language_Str MSG_IDEX_MENU                       = _UxGT("Re�im IDEX");
  PROGMEM Language_Str MSG_OFFSETS_MENU                    = _UxGT("Ofsety n�stroju");
  PROGMEM Language_Str MSG_IDEX_MODE_AUTOPARK              = _UxGT("Auto-Park");
  PROGMEM Language_Str MSG_IDEX_MODE_DUPLICATE             = _UxGT("Duplikace");
  PROGMEM Language_Str MSG_IDEX_MODE_MIRRORED_COPY         = _UxGT("Zrcadlen�");
  PROGMEM Language_Str MSG_IDEX_MODE_FULL_CTRL             = _UxGT("Pln� kontrola");
  PROGMEM Language_Str MSG_X_OFFSET                        = _UxGT("2. tryska X");
  PROGMEM Language_Str MSG_Y_OFFSET                        = _UxGT("2. tryska Y");
  PROGMEM Language_Str MSG_Z_OFFSET                        = _UxGT("2. tryska Z");

  PROGMEM Language_Str MSG_UBL_DOING_G29                   = _UxGT("Prov�d�m G29");
  PROGMEM Language_Str MSG_UBL_TOOLS                       = _UxGT("UBL n�stroje");
  PROGMEM Language_Str MSG_UBL_LEVEL_BED                   = _UxGT("Unified Bed Leveling");
  PROGMEM Language_Str MSG_UBL_MANUAL_MESH                 = _UxGT("Manu�ln� s�t bodu");
  PROGMEM Language_Str MSG_UBL_BC_INSERT                   = _UxGT("Vlo�te kartu, zmerte");
  PROGMEM Language_Str MSG_UBL_BC_INSERT2                  = _UxGT("Zmerte");
  PROGMEM Language_Str MSG_UBL_BC_REMOVE                   = _UxGT("Odstrante a zmerte");
  PROGMEM Language_Str MSG_UBL_MOVING_TO_NEXT              = _UxGT("Presun na dal��");
  PROGMEM Language_Str MSG_UBL_ACTIVATE_MESH               = _UxGT("Aktivovat UBL");
  PROGMEM Language_Str MSG_UBL_DEACTIVATE_MESH             = _UxGT("Deaktivovat UBL");
  PROGMEM Language_Str MSG_UBL_SET_TEMP_BED                = _UxGT("Teplota podlo�ky");
  PROGMEM Language_Str MSG_UBL_BED_TEMP_CUSTOM             = _UxGT("Teplota podlo�ky");
  PROGMEM Language_Str MSG_UBL_SET_TEMP_HOTEND             = _UxGT("Teplota hotendu");
  PROGMEM Language_Str MSG_UBL_HOTEND_TEMP_CUSTOM          = _UxGT("Teplota hotendu");
  PROGMEM Language_Str MSG_UBL_MESH_EDIT                   = _UxGT("�prava s�te bodu");
  PROGMEM Language_Str MSG_UBL_EDIT_CUSTOM_MESH            = _UxGT("Upravit vlastn� s�t");
  PROGMEM Language_Str MSG_UBL_FINE_TUNE_MESH              = _UxGT("Doladit s�t bodu");
  PROGMEM Language_Str MSG_UBL_DONE_EDITING_MESH           = _UxGT("Konec �prav s�te");
  PROGMEM Language_Str MSG_UBL_BUILD_CUSTOM_MESH           = _UxGT("Vlastn� s�t");
  PROGMEM Language_Str MSG_UBL_BUILD_MESH_MENU             = _UxGT("Vytvorit s�t");
  PROGMEM Language_Str MSG_UBL_BUILD_MESH_M1               = _UxGT("S�t bodu ") PREHEAT_1_LABEL;
  PROGMEM Language_Str MSG_UBL_BUILD_MESH_M2               = _UxGT("S�t bodu ") PREHEAT_2_LABEL;
  PROGMEM Language_Str MSG_UBL_BUILD_COLD_MESH             = _UxGT("Studen� s�t bodu");
  PROGMEM Language_Str MSG_UBL_MESH_HEIGHT_ADJUST          = _UxGT("Upravit v��ku s�te");
  PROGMEM Language_Str MSG_UBL_MESH_HEIGHT_AMOUNT          = _UxGT("V��ka");
  PROGMEM Language_Str MSG_UBL_VALIDATE_MESH_MENU          = _UxGT("Zkontrolovat s�t");
  PROGMEM Language_Str MSG_UBL_VALIDATE_MESH_M1            = _UxGT("Kontrola s�te ") PREHEAT_1_LABEL;
  PROGMEM Language_Str MSG_UBL_VALIDATE_MESH_M2            = _UxGT("Kontrola s�te ") PREHEAT_2_LABEL;
  PROGMEM Language_Str MSG_UBL_VALIDATE_CUSTOM_MESH        = _UxGT("Kontrola vlast. s�te");
  PROGMEM Language_Str MSG_UBL_CONTINUE_MESH               = _UxGT("Pokracovat v s�ti");
  PROGMEM Language_Str MSG_UBL_MESH_LEVELING               = _UxGT("S�tov� rovn�n�");
  PROGMEM Language_Str MSG_UBL_3POINT_MESH_LEVELING        = _UxGT("3-bodov� rovn�n�");
  PROGMEM Language_Str MSG_UBL_GRID_MESH_LEVELING          = _UxGT("Mr�kov� rovn�n�");
  PROGMEM Language_Str MSG_UBL_MESH_LEVEL                  = _UxGT("Srovnat podlo�ku");
  PROGMEM Language_Str MSG_UBL_SIDE_POINTS                 = _UxGT("Postrann� body");
  PROGMEM Language_Str MSG_UBL_MAP_TYPE                    = _UxGT("Typ s�te bodu");
  PROGMEM Language_Str MSG_UBL_OUTPUT_MAP                  = _UxGT("Exportovat s�t");
  PROGMEM Language_Str MSG_UBL_OUTPUT_MAP_HOST             = _UxGT("Exportovat do PC");
  PROGMEM Language_Str MSG_UBL_OUTPUT_MAP_CSV              = _UxGT("Exportovat do CSV");
  PROGMEM Language_Str MSG_UBL_OUTPUT_MAP_BACKUP           = _UxGT("Z�loha do PC");
  PROGMEM Language_Str MSG_UBL_INFO_UBL                    = _UxGT("Info o UBL do PC");
  PROGMEM Language_Str MSG_UBL_FILLIN_AMOUNT               = _UxGT("Hustota mr�ky");
  PROGMEM Language_Str MSG_UBL_MANUAL_FILLIN               = _UxGT("Rucn� hustota");
  PROGMEM Language_Str MSG_UBL_SMART_FILLIN                = _UxGT("Chytr� hustota");
  PROGMEM Language_Str MSG_UBL_FILLIN_MESH                 = _UxGT("Zaplnit mr�ku");
  PROGMEM Language_Str MSG_UBL_INVALIDATE_ALL              = _UxGT("Zru�it v�echno");
  PROGMEM Language_Str MSG_UBL_INVALIDATE_CLOSEST          = _UxGT("Zru�it posledn�");
  PROGMEM Language_Str MSG_UBL_FINE_TUNE_ALL               = _UxGT("Upravit v�echny");
  PROGMEM Language_Str MSG_UBL_FINE_TUNE_CLOSEST           = _UxGT("Upravit posledn�");
  PROGMEM Language_Str MSG_UBL_STORAGE_MESH_MENU           = _UxGT("Ulo�i�te s�t�");
  PROGMEM Language_Str MSG_UBL_STORAGE_SLOT                = _UxGT("Pametov� slot");
  PROGMEM Language_Str MSG_UBL_LOAD_MESH                   = _UxGT("Nac�st s�t bodu");
  PROGMEM Language_Str MSG_UBL_SAVE_MESH                   = _UxGT("Ulo�it s�t bodu");
  PROGMEM Language_Str MSG_MESH_LOADED                     = _UxGT("M117 S�t %i nactena");
  PROGMEM Language_Str MSG_MESH_SAVED                      = _UxGT("M117 S�t %i ulo�ena");
  PROGMEM Language_Str MSG_UBL_NO_STORAGE                  = _UxGT("Nedostatek m�sta");
  PROGMEM Language_Str MSG_UBL_SAVE_ERROR                  = _UxGT("Ch.: Ulo�it UBL");
  PROGMEM Language_Str MSG_UBL_RESTORE_ERROR               = _UxGT("Ch.: Obnovit UBL");
  PROGMEM Language_Str MSG_UBL_Z_OFFSET_STOPPED            = _UxGT("Konec Z-Offsetu");
  PROGMEM Language_Str MSG_UBL_STEP_BY_STEP_MENU           = _UxGT("UBL Postupne");
  PROGMEM Language_Str MSG_UBL_1_BUILD_COLD_MESH           = _UxGT("1. Studen� s�t bodu");
  PROGMEM Language_Str MSG_UBL_2_SMART_FILLIN              = _UxGT("2. Chytr� hustota");
  PROGMEM Language_Str MSG_UBL_3_VALIDATE_MESH_MENU        = _UxGT("3. Zkontrolovat s�t");
  PROGMEM Language_Str MSG_UBL_4_FINE_TUNE_ALL             = _UxGT("4. Upravit v�echny");
  PROGMEM Language_Str MSG_UBL_5_VALIDATE_MESH_MENU        = _UxGT("5. Zkontrolovat s�t");
  PROGMEM Language_Str MSG_UBL_6_FINE_TUNE_ALL             = _UxGT("6. Upravit v�echny");
  PROGMEM Language_Str MSG_UBL_7_SAVE_MESH                 = _UxGT("7. Ulo�it s�t bodu");

  PROGMEM Language_Str MSG_LED_CONTROL                     = _UxGT("Nastaven� LED");
  PROGMEM Language_Str MSG_LEDS                            = _UxGT("Svetla");
  PROGMEM Language_Str MSG_LED_PRESETS                     = _UxGT("Svetla Predvolby");
  PROGMEM Language_Str MSG_SET_LEDS_RED                    = _UxGT("Cerven�");
  PROGMEM Language_Str MSG_SET_LEDS_ORANGE                 = _UxGT("Oran�ov�");
  PROGMEM Language_Str MSG_SET_LEDS_YELLOW                 = _UxGT("�lut�");
  PROGMEM Language_Str MSG_SET_LEDS_GREEN                  = _UxGT("Zelen�");
  PROGMEM Language_Str MSG_SET_LEDS_BLUE                   = _UxGT("Modr�");
  PROGMEM Language_Str MSG_SET_LEDS_INDIGO                 = _UxGT("Indigo");
  PROGMEM Language_Str MSG_SET_LEDS_VIOLET                 = _UxGT("Fialov�");
  PROGMEM Language_Str MSG_SET_LEDS_WHITE                  = _UxGT("B�l�");
  PROGMEM Language_Str MSG_SET_LEDS_DEFAULT                = _UxGT("V�choz�");
  PROGMEM Language_Str MSG_CUSTOM_LEDS                     = _UxGT("Vlastn� svetla");
  PROGMEM Language_Str MSG_INTENSITY_R                     = _UxGT("Cerven� intenzita");
  PROGMEM Language_Str MSG_INTENSITY_G                     = _UxGT("Zelen� intezita");
  PROGMEM Language_Str MSG_INTENSITY_B                     = _UxGT("Modr� intenzita");
  PROGMEM Language_Str MSG_INTENSITY_W                     = _UxGT("B�l� intenzita");
  PROGMEM Language_Str MSG_LED_BRIGHTNESS                  = _UxGT("Jas");

  PROGMEM Language_Str MSG_MOVING                          = _UxGT("Posouv�n�...");
  PROGMEM Language_Str MSG_FREE_XY                         = _UxGT("Uvolnit XY");
  PROGMEM Language_Str MSG_MOVE_X                          = _UxGT("Posunout X");
  PROGMEM Language_Str MSG_MOVE_Y                          = _UxGT("Posunout Y");
  PROGMEM Language_Str MSG_MOVE_Z                          = _UxGT("Posunout Z");
  PROGMEM Language_Str MSG_MOVE_E                          = _UxGT("Extrud�r");
  PROGMEM Language_Str MSG_MOVE_EN                         = _UxGT("Extrud�r *");
  PROGMEM Language_Str MSG_HOTEND_TOO_COLD                 = _UxGT("Hotend je studen�");
  PROGMEM Language_Str MSG_MOVE_Z_DIST                     = _UxGT("Posunout o %smm");
  PROGMEM Language_Str MSG_MOVE_01MM                       = _UxGT("Posunout o 0,1mm");
  PROGMEM Language_Str MSG_MOVE_1MM                        = _UxGT("Posunout o 1mm");
  PROGMEM Language_Str MSG_MOVE_10MM                       = _UxGT("Posunout o 10mm");
  PROGMEM Language_Str MSG_SPEED                           = _UxGT("Rychlost");
  PROGMEM Language_Str MSG_BED_Z                           = _UxGT("V��ka podl.");
  PROGMEM Language_Str MSG_NOZZLE                          = _UxGT("Tryska");
  PROGMEM Language_Str MSG_NOZZLE_N                        = _UxGT("Tryska ~");
  PROGMEM Language_Str MSG_BED                             = _UxGT("Podlo�ka");
  PROGMEM Language_Str MSG_CHAMBER                         = _UxGT("Komora");
  PROGMEM Language_Str MSG_FAN_SPEED                       = _UxGT("Rychlost vent.");
  PROGMEM Language_Str MSG_FAN_SPEED_N                     = _UxGT("Rychlost vent. =");
  PROGMEM Language_Str MSG_EXTRA_FAN_SPEED                 = _UxGT("Rychlost ex. vent.");
  PROGMEM Language_Str MSG_EXTRA_FAN_SPEED_N               = _UxGT("Rychlost ex. vent. =");
  PROGMEM Language_Str MSG_FLOW                            = _UxGT("Prutok");
  PROGMEM Language_Str MSG_FLOW_N                          = _UxGT("Prutok ~");
  PROGMEM Language_Str MSG_CONTROL                         = _UxGT("Ovl�dan�");
  PROGMEM Language_Str MSG_MIN                             = " " LCD_STR_THERMOMETER _UxGT(" Min");
  PROGMEM Language_Str MSG_MAX                             = " " LCD_STR_THERMOMETER _UxGT(" Max");
  PROGMEM Language_Str MSG_FACTOR                          = " " LCD_STR_THERMOMETER _UxGT(" Fakt");
  PROGMEM Language_Str MSG_AUTOTEMP                        = _UxGT("Autoteplota");
  PROGMEM Language_Str MSG_LCD_ON                          = _UxGT("Zap");
  PROGMEM Language_Str MSG_LCD_OFF                         = _UxGT("Vyp");
  PROGMEM Language_Str MSG_SELECT                          = _UxGT("Vybrat");
  PROGMEM Language_Str MSG_SELECT_E                        = _UxGT("Vybrat *");
  PROGMEM Language_Str MSG_ACC                             = _UxGT("Zrychl");
  PROGMEM Language_Str MSG_JUNCTION_DEVIATION              = _UxGT("Odchylka spoje");
  PROGMEM Language_Str MSG_VELOCITY                        = _UxGT("Rychlost");
  PROGMEM Language_Str MSG_ACCELERATION                    = _UxGT("Akcelerace");
  PROGMEM Language_Str MSG_A_RETRACT                       = _UxGT("A-retrakt");
  PROGMEM Language_Str MSG_A_TRAVEL                        = _UxGT("A-prejezd");
  PROGMEM Language_Str MSG_STEPS_PER_MM                    = _UxGT("Kroku/mm");
  PROGMEM Language_Str MSG_A_STEPS                         = LCD_STR_A _UxGT("kroku/mm");
  PROGMEM Language_Str MSG_B_STEPS                         = LCD_STR_B _UxGT("kroku/mm");
  PROGMEM Language_Str MSG_C_STEPS                         = LCD_STR_C _UxGT("kroku/mm");
  PROGMEM Language_Str MSG_E_STEPS                         = _UxGT("Ekroku/mm");
  PROGMEM Language_Str MSG_EN_STEPS                        = _UxGT("*kroku/mm");
  PROGMEM Language_Str MSG_TEMPERATURE                     = _UxGT("Teplota");
  PROGMEM Language_Str MSG_MOTION                          = _UxGT("Pohyb");
  PROGMEM Language_Str MSG_FILAMENT                        = _UxGT("Filament");
  PROGMEM Language_Str MSG_VOLUMETRIC_ENABLED              = _UxGT("E na mm3");
  PROGMEM Language_Str MSG_FILAMENT_DIAM                   = _UxGT("Fil. Prum.");
  PROGMEM Language_Str MSG_FILAMENT_DIAM_E                 = _UxGT("Fil. Prum. *");
  PROGMEM Language_Str MSG_FILAMENT_UNLOAD                 = _UxGT("Vysunout mm");
  PROGMEM Language_Str MSG_FILAMENT_LOAD                   = _UxGT("Zav�st mm");
  PROGMEM Language_Str MSG_ADVANCE_K                       = _UxGT("K pro posun");
  PROGMEM Language_Str MSG_ADVANCE_K_E                     = _UxGT("K pro posun *");
  PROGMEM Language_Str MSG_CONTRAST                        = _UxGT("Kontrast LCD");
  PROGMEM Language_Str MSG_STORE_EEPROM                    = _UxGT("Ulo�it nastaven�");
  PROGMEM Language_Str MSG_LOAD_EEPROM                     = _UxGT("Nac�st nastaven�");
  PROGMEM Language_Str MSG_RESTORE_FAILSAFE                = _UxGT("Obnovit v�choz�");
  PROGMEM Language_Str MSG_INIT_EEPROM                     = _UxGT("Inic. EEPROM");
  PROGMEM Language_Str MSG_MEDIA_UPDATE                    = _UxGT("Aktualizace z SD");
  PROGMEM Language_Str MSG_RESET_PRINTER                   = _UxGT("Reset tisk�rny");
  PROGMEM Language_Str MSG_REFRESH                         = LCD_STR_REFRESH _UxGT("Obnovit");
  PROGMEM Language_Str MSG_WATCH                           = _UxGT("Info obrazovka");
  PROGMEM Language_Str MSG_PREPARE                         = _UxGT("Priprava tisku");
  PROGMEM Language_Str MSG_TUNE                            = _UxGT("Doladen� tisku");
  PROGMEM Language_Str MSG_START_PRINT                     = _UxGT("Spustit tisk");
  PROGMEM Language_Str MSG_BUTTON_PRINT                    = _UxGT("Tisk");
  PROGMEM Language_Str MSG_BUTTON_CANCEL                   = _UxGT("Zru�it");
  PROGMEM Language_Str MSG_PAUSE_PRINT                     = _UxGT("Pozastavit tisk");
  PROGMEM Language_Str MSG_RESUME_PRINT                    = _UxGT("Obnovit tisk");
  PROGMEM Language_Str MSG_STOP_PRINT                      = _UxGT("Zastavit tisk");
  PROGMEM Language_Str MSG_OUTAGE_RECOVERY                 = _UxGT("Obnova v�padku");
  PROGMEM Language_Str MSG_MEDIA_MENU                      = _UxGT("Tisknout z SD");
  PROGMEM Language_Str MSG_NO_MEDIA                        = _UxGT("��dn� SD karta");
  PROGMEM Language_Str MSG_DWELL                           = _UxGT("Usp�no...");
  PROGMEM Language_Str MSG_USERWAIT                        = _UxGT("Cek�n� na u�iv...");
  PROGMEM Language_Str MSG_PRINT_PAUSED                    = _UxGT("Tisk pozastaven");
  PROGMEM Language_Str MSG_PRINTING                        = _UxGT("Tisknu...");
  PROGMEM Language_Str MSG_PRINT_ABORTED                   = _UxGT("Tisk zru�en");
  PROGMEM Language_Str MSG_NO_MOVE                         = _UxGT("��dn� pohyb.");
  PROGMEM Language_Str MSG_KILLED                          = _UxGT("PRERUSENO. ");
  PROGMEM Language_Str MSG_STOPPED                         = _UxGT("ZASTAVENO. ");
  PROGMEM Language_Str MSG_CONTROL_RETRACT                 = _UxGT("Retrakt mm");
  PROGMEM Language_Str MSG_CONTROL_RETRACT_SWAP            = _UxGT("V�mena Re.mm");
  PROGMEM Language_Str MSG_CONTROL_RETRACTF                = _UxGT("Retraktovat  V");
  PROGMEM Language_Str MSG_CONTROL_RETRACT_ZHOP            = _UxGT("Zvednuti Z mm");
  PROGMEM Language_Str MSG_CONTROL_RETRACT_RECOVER         = _UxGT("UnRet mm");
  PROGMEM Language_Str MSG_CONTROL_RETRACT_RECOVER_SWAP    = _UxGT("S UnRet mm");
  PROGMEM Language_Str MSG_CONTROL_RETRACT_RECOVERF        = _UxGT("UnRet  V");
  PROGMEM Language_Str MSG_CONTROL_RETRACT_RECOVER_SWAPF   = _UxGT("S UnRet V");
  PROGMEM Language_Str MSG_AUTORETRACT                     = _UxGT("AutoRetr.");
  PROGMEM Language_Str MSG_FILAMENT_SWAP_LENGTH            = _UxGT("D�lka retrakce");
  PROGMEM Language_Str MSG_TOOL_CHANGE                     = _UxGT("V�mena n�stroje");
  PROGMEM Language_Str MSG_TOOL_CHANGE_ZLIFT               = _UxGT("Zdvih Z");
  PROGMEM Language_Str MSG_SINGLENOZZLE_PRIME_SPD          = _UxGT("Rychlost prim�r.");
  PROGMEM Language_Str MSG_SINGLENOZZLE_RETRACT_SPD        = _UxGT("Rychlost retrak.");
  PROGMEM Language_Str MSG_NOZZLE_STANDBY                  = _UxGT("Tryska standby");
  PROGMEM Language_Str MSG_FILAMENTCHANGE                  = _UxGT("Vymenit filament");
  PROGMEM Language_Str MSG_FILAMENTCHANGE_E                = _UxGT("Vymenit filament *");
  PROGMEM Language_Str MSG_FILAMENTLOAD                    = _UxGT("Zav�st filament");
  PROGMEM Language_Str MSG_FILAMENTLOAD_E                  = _UxGT("Zav�st filament *");
  PROGMEM Language_Str MSG_FILAMENTUNLOAD                  = _UxGT("Vysunout filament");
  PROGMEM Language_Str MSG_FILAMENTUNLOAD_E                = _UxGT("Vysunout filament *");
  PROGMEM Language_Str MSG_FILAMENTUNLOAD_ALL              = _UxGT("Vysunout v�e");

  PROGMEM Language_Str MSG_INIT_MEDIA                      = _UxGT("Nac�st SD kartu");
  PROGMEM Language_Str MSG_CHANGE_MEDIA                    = _UxGT("Vymenit SD kartu");
  PROGMEM Language_Str MSG_ZPROBE_OUT                      = _UxGT("Sonda Z mimo podl");
  PROGMEM Language_Str MSG_SKEW_FACTOR                     = _UxGT("Faktor zkosen�");
  PROGMEM Language_Str MSG_BLTOUCH                         = _UxGT("BLTouch");
  PROGMEM Language_Str MSG_BLTOUCH_SELFTEST                = _UxGT("BLTouch self-test");
  PROGMEM Language_Str MSG_BLTOUCH_RESET                   = _UxGT("BLTouch reset");
  PROGMEM Language_Str MSG_BLTOUCH_DEPLOY                  = _UxGT("BLTouch vysunout");
  PROGMEM Language_Str MSG_BLTOUCH_SW_MODE                 = _UxGT("SW v�sun BLTouch");
  PROGMEM Language_Str MSG_BLTOUCH_5V_MODE                 = _UxGT("BLTouch 5V re�im");
  PROGMEM Language_Str MSG_BLTOUCH_OD_MODE                 = _UxGT("BLTouch OD re�im");
  PROGMEM Language_Str MSG_BLTOUCH_STOW                    = _UxGT("BLTouch zasunout");
  PROGMEM Language_Str MSG_MANUAL_DEPLOY                   = _UxGT("Vysunout Z-sondu");
  PROGMEM Language_Str MSG_MANUAL_STOW                     = _UxGT("Zasunout Z-sondu");
  PROGMEM Language_Str MSG_HOME_FIRST                      = _UxGT("Domu %s%s%s prvn�");
  PROGMEM Language_Str MSG_ZPROBE_ZOFFSET                  = _UxGT("Z ofset");
  PROGMEM Language_Str MSG_BABYSTEP_X                      = _UxGT("Babystep X");
  PROGMEM Language_Str MSG_BABYSTEP_Y                      = _UxGT("Babystep Y");
  PROGMEM Language_Str MSG_BABYSTEP_Z                      = _UxGT("Babystep Z");
  PROGMEM Language_Str MSG_BABYSTEP_TOTAL                  = _UxGT("Celkem");
  PROGMEM Language_Str MSG_ENDSTOP_ABORT                   = _UxGT("Endstop abort");
  PROGMEM Language_Str MSG_HEATING_FAILED_LCD              = _UxGT("Chyba zahr�v�n�");
  PROGMEM Language_Str MSG_HEATING_FAILED_LCD_BED          = _UxGT("Chyba zahr.podl.");
  PROGMEM Language_Str MSG_ERR_REDUNDANT_TEMP              = _UxGT("REDUND. TEPLOTA");
  PROGMEM Language_Str MSG_THERMAL_RUNAWAY                 = _UxGT("TEPLOTN� �NIK");
  PROGMEM Language_Str MSG_THERMAL_RUNAWAY_BED             = _UxGT("TEPL. �NIK PODL.");
  PROGMEM Language_Str MSG_ERR_MAXTEMP                     = _UxGT("VYSOK� TEPLOTA");
  PROGMEM Language_Str MSG_ERR_MINTEMP                     = _UxGT("N�ZKA TEPLOTA");
  PROGMEM Language_Str MSG_ERR_MAXTEMP_BED                 = _UxGT("VYS. TEPL. PODL.");
  PROGMEM Language_Str MSG_ERR_MINTEMP_BED                 = _UxGT("N�Z. TEPL. PODL.");
  PROGMEM Language_Str MSG_ERR_MAXTEMP_CHAMBER             = _UxGT("Err: MAXTEMP KOMORA");
  PROGMEM Language_Str MSG_ERR_MINTEMP_CHAMBER             = _UxGT("Err: MINTEMP KOMORA");
  PROGMEM Language_Str MSG_ERR_Z_HOMING                    = _UxGT("Domu XY prvn�");
  PROGMEM Language_Str MSG_HALTED                          = _UxGT("TISK. ZASTAVENA");
  PROGMEM Language_Str MSG_PLEASE_RESET                    = _UxGT("Provedte reset");
  PROGMEM Language_Str MSG_SHORT_DAY                       = _UxGT("d");
  PROGMEM Language_Str MSG_SHORT_HOUR                      = _UxGT("h");
  PROGMEM Language_Str MSG_SHORT_MINUTE                    = _UxGT("m");
  PROGMEM Language_Str MSG_HEATING                         = _UxGT("Zahr�v�n�...");
  PROGMEM Language_Str MSG_COOLING                         = _UxGT("Chlazen�...");
  #if LCD_WIDTH >= 20
    PROGMEM Language_Str MSG_BED_HEATING                   = _UxGT("Zahr�v�n� podlo�ky");
  #else
    PROGMEM Language_Str MSG_BED_HEATING                   = _UxGT("Zahr�v�n� podl.");
  #endif
  #if LCD_WIDTH >= 20
    PROGMEM Language_Str MSG_BED_COOLING                   = _UxGT("Chlazen� podlo�ky");
  #else
    PROGMEM Language_Str MSG_BED_COOLING                   = _UxGT("Chlazen� podl.");
  #endif
  PROGMEM Language_Str MSG_DELTA_CALIBRATE                 = _UxGT("Delta Kalibrace");
  PROGMEM Language_Str MSG_DELTA_CALIBRATE_X               = _UxGT("Kalibrovat X");
  PROGMEM Language_Str MSG_DELTA_CALIBRATE_Y               = _UxGT("Kalibrovat Y");
  PROGMEM Language_Str MSG_DELTA_CALIBRATE_Z               = _UxGT("Kalibrovat Z");
  PROGMEM Language_Str MSG_DELTA_CALIBRATE_CENTER          = _UxGT("Kalibrovat Stred");
  PROGMEM Language_Str MSG_DELTA_SETTINGS                  = _UxGT("Delta nastaven�");
  PROGMEM Language_Str MSG_DELTA_AUTO_CALIBRATE            = _UxGT("Autokalibrace");
  PROGMEM Language_Str MSG_DELTA_HEIGHT_CALIBRATE          = _UxGT("Nast.v��ku delty");
  PROGMEM Language_Str MSG_DELTA_Z_OFFSET_CALIBRATE        = _UxGT("Nast. Z-ofset");
  PROGMEM Language_Str MSG_DELTA_DIAG_ROD                  = _UxGT("Diag rameno");
  PROGMEM Language_Str MSG_DELTA_HEIGHT                    = _UxGT("V��ka");
  PROGMEM Language_Str MSG_DELTA_RADIUS                    = _UxGT("Polomer");
  PROGMEM Language_Str MSG_INFO_MENU                       = _UxGT("O tisk�rne");
  PROGMEM Language_Str MSG_INFO_PRINTER_MENU               = _UxGT("Info o tisk�rne");
  PROGMEM Language_Str MSG_3POINT_LEVELING                 = _UxGT("3-bodov� rovn�n�");
  PROGMEM Language_Str MSG_LINEAR_LEVELING                 = _UxGT("Line�rni rovn�n�");
  PROGMEM Language_Str MSG_BILINEAR_LEVELING               = _UxGT("Biline�rn� rovn�n�");
  PROGMEM Language_Str MSG_UBL_LEVELING                    = _UxGT("Unified Bed Leveling");
  PROGMEM Language_Str MSG_MESH_LEVELING                   = _UxGT("Mr�kov� rovn�n�");
  PROGMEM Language_Str MSG_INFO_STATS_MENU                 = _UxGT("Statistika");
  PROGMEM Language_Str MSG_INFO_BOARD_MENU                 = _UxGT("Info o desce");
  PROGMEM Language_Str MSG_INFO_THERMISTOR_MENU            = _UxGT("Termistory");
  PROGMEM Language_Str MSG_INFO_EXTRUDERS                  = _UxGT("Extrud�ry");
  PROGMEM Language_Str MSG_INFO_BAUDRATE                   = _UxGT("Rychlost");
  PROGMEM Language_Str MSG_INFO_PROTOCOL                   = _UxGT("Protokol");
  PROGMEM Language_Str MSG_CASE_LIGHT                      = _UxGT("Osvetlen�");
  PROGMEM Language_Str MSG_CASE_LIGHT_BRIGHTNESS           = _UxGT("Jas svetla");

  #if LCD_WIDTH >= 20
    PROGMEM Language_Str MSG_INFO_PRINT_COUNT              = _UxGT("Pocet tisku");
    PROGMEM Language_Str MSG_INFO_COMPLETED_PRINTS         = _UxGT("Dokonceno");
    PROGMEM Language_Str MSG_INFO_PRINT_TIME               = _UxGT("Celkov� cas");
    PROGMEM Language_Str MSG_INFO_PRINT_LONGEST            = _UxGT("Nejdel�� tisk");
    PROGMEM Language_Str MSG_INFO_PRINT_FILAMENT           = _UxGT("Celkem vytlaceno");
  #else
    PROGMEM Language_Str MSG_INFO_PRINT_COUNT              = _UxGT("Tisky");
    PROGMEM Language_Str MSG_INFO_COMPLETED_PRINTS         = _UxGT("Hotovo");
    PROGMEM Language_Str MSG_INFO_PRINT_TIME               = _UxGT("Cas");
    PROGMEM Language_Str MSG_INFO_PRINT_LONGEST            = _UxGT("Nejdel��");
    PROGMEM Language_Str MSG_INFO_PRINT_FILAMENT           = _UxGT("Vytlaceno");
  #endif

  PROGMEM Language_Str MSG_INFO_MIN_TEMP                   = _UxGT("Teplota min");
  PROGMEM Language_Str MSG_INFO_MAX_TEMP                   = _UxGT("Teplota max");
  PROGMEM Language_Str MSG_INFO_PSU                        = _UxGT("Nap. zdroj");
  PROGMEM Language_Str MSG_DRIVE_STRENGTH                  = _UxGT("Buzen� motoru");
  PROGMEM Language_Str MSG_DAC_PERCENT                     = _UxGT("Motor %");
  PROGMEM Language_Str MSG_DAC_EEPROM_WRITE                = _UxGT("Ulo�it do EEPROM");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEADER          = _UxGT("V�MENA FILAMENTU");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEADER_PAUSE    = _UxGT("TISK POZASTAVEN");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEADER_LOAD     = _UxGT("ZAVEDEN� FILAMENTU");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEADER_UNLOAD   = _UxGT("VYSUNUT� FILAMENTU");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_OPTION_HEADER   = _UxGT("MO�NOSTI OBNOVEN�:");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_OPTION_PURGE    = _UxGT("Vytlacit v�c");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_OPTION_RESUME   = _UxGT("Obnovit tisk");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_NOZZLE          = _UxGT("  Tryska: ");
  PROGMEM Language_Str MSG_RUNOUT_SENSOR                   = _UxGT("Senzor filamentu");
  PROGMEM Language_Str MSG_LCD_HOMING_FAILED               = _UxGT("Parkov�n� selhalo");
  PROGMEM Language_Str MSG_LCD_PROBING_FAILED              = _UxGT("Kalibrace selhala");
  PROGMEM Language_Str MSG_M600_TOO_COLD                   = _UxGT("M600: Moc studen�");

  PROGMEM Language_Str MSG_MMU2_CHOOSE_FILAMENT_HEADER     = _UxGT("VYBERTE FILAMENT");
  PROGMEM Language_Str MSG_MMU2_MENU                       = _UxGT("MMU");
  PROGMEM Language_Str MSG_MMU2_WRONG_FIRMWARE             = _UxGT("Aktual. MMU firmware!");
  PROGMEM Language_Str MSG_MMU2_NOT_RESPONDING             = _UxGT("MMU potr. pozornost.");
  PROGMEM Language_Str MSG_MMU2_RESUME                     = _UxGT("Obnovit tisk");
  PROGMEM Language_Str MSG_MMU2_RESUMING                   = _UxGT("Obnovov�n�...");
  PROGMEM Language_Str MSG_MMU2_LOAD_FILAMENT              = _UxGT("Zav�st filament");
  PROGMEM Language_Str MSG_MMU2_LOAD_ALL                   = _UxGT("Zav�st v�echny");
  PROGMEM Language_Str MSG_MMU2_LOAD_TO_NOZZLE             = _UxGT("Zav�st do trysky");
  PROGMEM Language_Str MSG_MMU2_EJECT_FILAMENT             = _UxGT("Vysunout filament");
  PROGMEM Language_Str MSG_MMU2_EJECT_FILAMENT_N           = _UxGT("Vysun. filament ~");
  PROGMEM Language_Str MSG_MMU2_UNLOAD_FILAMENT            = _UxGT("Vyt�hnout filament");
  PROGMEM Language_Str MSG_MMU2_LOADING_FILAMENT           = _UxGT("Zav�den� fil. %i...");
  PROGMEM Language_Str MSG_MMU2_EJECTING_FILAMENT          = _UxGT("Vytahov�n� fil. ...");
  PROGMEM Language_Str MSG_MMU2_UNLOADING_FILAMENT         = _UxGT("Vysouv�n� fil....");
  PROGMEM Language_Str MSG_MMU2_ALL                        = _UxGT("V�echny");
  PROGMEM Language_Str MSG_MMU2_FILAMENT_N                 = _UxGT("Filament ~");
  PROGMEM Language_Str MSG_MMU2_RESET                      = _UxGT("Resetovat MMU");
  PROGMEM Language_Str MSG_MMU2_RESETTING                  = _UxGT("Resetov�n� MMU...");
  PROGMEM Language_Str MSG_MMU2_EJECT_RECOVER              = _UxGT("Vyt�hnete, kliknete");

  PROGMEM Language_Str MSG_MIX                             = _UxGT("Mix");
  PROGMEM Language_Str MSG_MIX_COMPONENT_N                 = _UxGT("Komponenta ~");
  PROGMEM Language_Str MSG_MIXER                           = _UxGT("Mix�r");
  PROGMEM Language_Str MSG_GRADIENT                        = _UxGT("Prechod");
  PROGMEM Language_Str MSG_FULL_GRADIENT                   = _UxGT("Cel� prechod");
  PROGMEM Language_Str MSG_TOGGLE_MIX                      = _UxGT("Prepnout mix");
  PROGMEM Language_Str MSG_CYCLE_MIX                       = _UxGT("Str�dat mix");
  PROGMEM Language_Str MSG_GRADIENT_MIX                    = _UxGT("Prechod mix");
  PROGMEM Language_Str MSG_REVERSE_GRADIENT                = _UxGT("Opacn� prechod");
  #if LCD_WIDTH >= 20
    PROGMEM Language_Str MSG_ACTIVE_VTOOL                  = _UxGT("Aktivn� V-n�stroj");
    PROGMEM Language_Str MSG_START_VTOOL                   = _UxGT("Spustit V-n�stroj");
    PROGMEM Language_Str MSG_END_VTOOL                     = _UxGT("Ukoncit V-n�stroj");
    PROGMEM Language_Str MSG_GRADIENT_ALIAS                = _UxGT("Alias V-n�stroje");
    PROGMEM Language_Str MSG_RESET_VTOOLS                  = _UxGT("Resetovat V-n�stroj");
    PROGMEM Language_Str MSG_COMMIT_VTOOL                  = _UxGT("Ulo�it V-n�stroj mix");
    PROGMEM Language_Str MSG_VTOOLS_RESET                  = _UxGT("V-n�stroj resetovat");
  #else
    PROGMEM Language_Str MSG_ACTIVE_VTOOL                  = _UxGT("Aktivn� V-n�str.");
    PROGMEM Language_Str MSG_START_VTOOL                   = _UxGT("Spustit V-n�str.");
    PROGMEM Language_Str MSG_END_VTOOL                     = _UxGT("Ukoncit V-n�str.");
    PROGMEM Language_Str MSG_GRADIENT_ALIAS                = _UxGT("Alias V-n�str.");
    PROGMEM Language_Str MSG_RESET_VTOOLS                  = _UxGT("Reset. V-n�str.");
    PROGMEM Language_Str MSG_COMMIT_VTOOL                  = _UxGT("Ulo�it V-n�s. mix");
    PROGMEM Language_Str MSG_VTOOLS_RESET                  = _UxGT("V-n�str. reset.");
  #endif
  PROGMEM Language_Str MSG_START_Z                         = _UxGT("Poc�tecn� Z:");
  PROGMEM Language_Str MSG_END_Z                           = _UxGT("  Koncov� Z:");
  PROGMEM Language_Str MSG_BRICKOUT                        = _UxGT("Brickout");
  PROGMEM Language_Str MSG_INVADERS                        = _UxGT("Invaders");
  PROGMEM Language_Str MSG_SNAKE                           = _UxGT("Sn4k3");
  PROGMEM Language_Str MSG_MAZE                            = _UxGT("Bludi�te");

  PROGMEM Language_Str MSG_EXPECTED_PRINTER                = _UxGT("Nespr�vn� tisk�rna");

  #if LCD_HEIGHT >= 4
    // Up to 3 lines allowed
    PROGMEM Language_Str MSG_ADVANCED_PAUSE_WAITING        = _UxGT(MSG_2_LINE("Stiknete tlac�tko", "pro obnoven� tisku"));
    PROGMEM Language_Str MSG_PAUSE_PRINT_INIT              = _UxGT(MSG_1_LINE("Parkov�n�..."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_INIT          = _UxGT(MSG_3_LINE("Cekejte pros�m", "na zah�jen�", "v�meny filamentu"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_INSERT        = _UxGT(MSG_3_LINE("Vlo�te filament", "a stisknete", "tlac�tko..."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEAT          = _UxGT(MSG_2_LINE("Kliknete pro", "nahr�t� trysky"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEATING       = _UxGT(MSG_2_LINE("Cekejte pros�m", "na nahr�t� tr."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_UNLOAD        = _UxGT(MSG_3_LINE("Cekejte pros�m", "na vysunuti", "filamentu"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_LOAD          = _UxGT(MSG_3_LINE("Cekejte pros�m", "na zaveden�", "filamentu"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_PURGE         = _UxGT(MSG_2_LINE("Vyckejte na", "vytlacen�"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_CONT_PURGE    = _UxGT(MSG_3_LINE("Kliknete pro", "ukoncen�", "vytlacov�n�"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_RESUME        = _UxGT(MSG_3_LINE("Cekejte pros�m", "na pokracov�n�", "tisku"));
  #else // LCD_HEIGHT < 4
    // Up to 2 lines allowed
    PROGMEM Language_Str MSG_ADVANCED_PAUSE_WAITING        = _UxGT(MSG_2_LINE("Stiknete tlac.", "pro obnoven�"));
    PROGMEM Language_Str MSG_PAUSE_PRINT_INIT              = _UxGT(MSG_1_LINE("Parkov�n�..."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_INIT          = _UxGT(MSG_1_LINE("Cekejte..."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_INSERT        = _UxGT(MSG_1_LINE("Vlo�te, kliknete"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEAT          = _UxGT(MSG_2_LINE("Kliknete pro", "nahr�t�"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEATING       = _UxGT(MSG_1_LINE("Nahr�v�n�..."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_UNLOAD        = _UxGT(MSG_1_LINE("Vysouv�n�..."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_LOAD          = _UxGT(MSG_1_LINE("Zav�den�..."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_PURGE         = _UxGT(MSG_1_LINE("Vytlacov�n�..."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_CONT_PURGE    = _UxGT(MSG_2_LINE("Kliknete pro", "ukoncen�"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_RESUME        = _UxGT(MSG_1_LINE("Pokracov�n�..."));
  #endif // LCD_HEIGHT < 4

  PROGMEM Language_Str MSG_TMC_DRIVERS                     = _UxGT("TMC budice");
  PROGMEM Language_Str MSG_TMC_CURRENT                     = _UxGT("Proud budicu");
  PROGMEM Language_Str MSG_TMC_HYBRID_THRS                 = _UxGT("Hybridn� pr�h");
  PROGMEM Language_Str MSG_TMC_HOMING_THRS                 = _UxGT("Domu bez senzoru");
  PROGMEM Language_Str MSG_TMC_STEPPING_MODE               = _UxGT("Re�im kroku");
  PROGMEM Language_Str MSG_TMC_STEALTH_ENABLED             = _UxGT("StealthChop povolen");
  PROGMEM Language_Str MSG_SERVICE_RESET                   = _UxGT("Reset");
  PROGMEM Language_Str MSG_SERVICE_IN                      = _UxGT(" za:");
  PROGMEM Language_Str MSG_BACKLASH                        = _UxGT("Vule");
  PROGMEM Language_Str MSG_BACKLASH_A                      = LCD_STR_A;
  PROGMEM Language_Str MSG_BACKLASH_B                      = LCD_STR_B;
  PROGMEM Language_Str MSG_BACKLASH_C                      = LCD_STR_C;
  PROGMEM Language_Str MSG_BACKLASH_CORRECTION             = _UxGT("Korekce");
  PROGMEM Language_Str MSG_BACKLASH_SMOOTHING              = _UxGT("Vyhlazen�");
}
