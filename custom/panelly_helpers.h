#pragma once

#include "esphome/core/log.h"

#include "lvgl.h"

#include <cinttypes>
#include <cstdint>
#include <cstdio>
#include <string>

namespace panelly {

  const int16_t MAX_COUNT = 10;
  const int16_t MIN_COUNT = 0;

  // inline int16_t increment_click(int16_t current) {
  //   if ((current + 1) > MAX_COUNT) {
  //     return current;
  //   }
  //   return current + 1;
  // }

  // inline int16_t decrement_click(int16_t current) {
  //   if ((current - 1) < MIN_COUNT) {
  //     return current;
  //   }
  //   return current - 1;
  // }

  // inline std::string log_update(int16_t count) {
  //   char buffer[32];
  //   ESP_LOGI("panelly", "Click count: %" PRId16, count);
  //   return std::string(buffer);
  // }

  // inline int16_t handle_inc_click(lv_obj_t *label, lv_obj_t *bar, int16_t counter) {
  //   counter = increment_click(counter);

  //   char text[16];
  //   std::snprintf(text, sizeof(text), "Clicks: %" PRId16, counter);
  //   lv_label_set_text(label, text);
  //   lv_bar_set_value(bar, counter, LV_ANIM_ON);
  //   log_update(counter);

  //   return counter;
  // }

  // inline int16_t handle_dec_click(lv_obj_t *label, lv_obj_t *bar, int16_t counter) {
  //   counter = decrement_click(counter);

  //   char text[16];
  //   std::snprintf(text, sizeof(text), "Clicks: %" PRId16, counter);
  //   lv_label_set_text(label, text);
  //   lv_bar_set_value(bar, counter, LV_ANIM_ON);
  //   log_update(counter);

  //   return counter;
  // }

}
