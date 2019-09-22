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

/**
 * driver.cpp
 *
 * Copyright (c) 2019 Alberto Cotronei @MagoKimbra
 */

#include "../../../../MK4duo.h"
#include "driver.h"
#include "sanitycheck.h"

driver_t driver = { nullptr };

/** Public Function */
void Driver::init() {
  if (data.pin.enable != NoPin && data.pin.dir != NoPin && data.pin.step != NoPin) {
    dir_init();
    enable_init();
    if (!isEnable()) enable_write(HIGH);
    step_init();
    step_write(isStep());
    #if MB(ALLIGATOR_R2) || MB(ALLIGATOR_R3)
      externaldac.set_driver_current(id, data.ma);
    #endif
  }
}
