/* SPDX-FileCopyrightText: 2024 Google LLC */
/* SPDX-License-Identifier: Apache-2.0 */

#pragma once

#include "menu.h"

typedef enum {
  QL_TAP_UP = 0,
  QL_TAP_DOWN,
  QL_HOLD_UP,
  QL_HOLD_SELECT,
  QL_HOLD_DOWN,
  QL_HOLD_BACK,
  QL_COMBO_BACK_UP,
  QL_COMBO_UP_DOWN,
} QuickLaunchAction;

const SettingsModuleMetadata *settings_quick_launch_get_info(void);
