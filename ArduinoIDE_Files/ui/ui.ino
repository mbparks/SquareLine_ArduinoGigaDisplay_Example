#include "Arduino_H7_Video.h"
#include "Arduino_GigaDisplayTouch.h"
#include "lvgl.h"
#include <ui.h>

Arduino_H7_Video Display( 800, 480, GigaDisplayShield ); //( 800, 480, GigaDisplayShield );
Arduino_GigaDisplayTouch TouchDetector;

bool ledState = LOW; // Initial state of the LED

void setup() {
  Display.begin();
  TouchDetector.begin();
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, ledState);
  ui_init();
}

void loop()
{
  lv_timer_handler();
  delay(5);
  lv_bar_set_value(ui_Bar2, random(0,1023), LV_ANIM_OFF);
}
