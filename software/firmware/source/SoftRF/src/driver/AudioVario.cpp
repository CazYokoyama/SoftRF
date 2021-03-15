/*
 * AudioVario.cpp
 * Copyright (C) 2016-2021 Linar Yusupov
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "AudioVario.h"
#include "../system/SoC.h"
#include "EEPROM.h"

/*
  10 knots = 10 nautical miles/hour = 60761.2 feed / 3600 sec = 16.88 feet/s
*/
#define MAX_VS 16.88 /* feet/s = 10 knots */
#define UPDATE_PERIOD 2000
#define FAST_ONE_CYCLE 75
#define SLOW_ONE_CYCLE 1000

static unsigned long AudioVarioTimeMarker = 0;
static const int freq_array[] = {
  50, 100, 200, 640, 1040, 3000, 3500
};
#define CLIMB_START 2
#define DEAD_BAND 0.2

static bool turned_on = false;

void Audio_Vario(double vs)
{
  unsigned long t = millis();
  unsigned long lapse = t - AudioVarioTimeMarker;
  const int max_freq_index = (sizeof(freq_array) / sizeof(freq_array[0]))
    - 1 - CLIMB_START;
  static int one_cycle = SLOW_ONE_CYCLE, freq_index = 0,
    on_period = 1000 / (freq_array[CLIMB_START] / 20);
  int hz;

  if (vs > MAX_VS)
    vs = MAX_VS;

  if (vs < DEAD_BAND) /* below than dead band */
    hz = 0;
  else {
    one_cycle =
      (SLOW_ONE_CYCLE - FAST_ONE_CYCLE) * ((MAX_VS - vs) / MAX_VS)
      + FAST_ONE_CYCLE;

    /* map vs to freq_index */
    freq_index = max_freq_index * vs / MAX_VS + CLIMB_START;
    hz = freq_array[freq_index];
    on_period = 1000 / (hz / 20); /* need 20 pulses */
  }

  if (hz > 0 && lapse < on_period) {
    if (!turned_on) {
      SoC->Sound_tone(hz, settings->volume);
      turned_on = true;
    }
  } else {
    SoC->Sound_tone(0, settings->volume);
    turned_on = false;
  }

  if (lapse > one_cycle)
    AudioVarioTimeMarker = t;
}
