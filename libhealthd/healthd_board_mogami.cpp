/*
 * Copyright (C) 2013 The Android Open Source Project
 * Copyright (C) 2013 The CyanogenMod Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <healthd.h>

void healthd_board_init(struct healthd_config *config)
{
    config->batteryStatusPath         = "/sys/class/power_supply/bq24185/status";
    config->batteryHealthPath         = "/sys/class/power_supply/chargalg/health";
    config->batteryPresentPath        = "/sys/class/power_supply/bq27520/present";
    config->batteryCapacityPath       = "/sys/class/power_supply/bq27520/capacity";
    config->batteryVoltagePath        = "/sys/class/power_supply/bq27520/voltage_now";
    config->batteryTemperaturePath    = "/sys/class/power_supply/semc_battery_data/temp";
    config->batteryTechnologyPath     = "/sys/class/power_supply/semc_battery_data/technology";
    config->batteryCurrentNowPath     = "/sys/class/power_supply/bq27520/current_now";
    config->batteryCurrentAvgPath     = "/sys/class/power_supply/bq27520/current_avg";
}


int healthd_board_battery_update(struct android::BatteryProperties *props)
{
    // return 0 to log periodic polled battery status to kernel log
    return 1;
}

void healthd_board_mode_charger_draw_battery(struct android::BatteryProperties*)
{

}

void healthd_board_mode_charger_battery_update(struct android::BatteryProperties*)
{

}

void healthd_board_mode_charger_set_backlight(bool)
{

}

void healthd_board_mode_charger_init()
{

}
