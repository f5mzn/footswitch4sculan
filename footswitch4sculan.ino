/*
  SCU LAN Foot Switch Controller

  This code works on Arduino Leonardo or any board
  with a ATmega32U4 (like the Pro Micro ATmega32U4)
  
*/

#include <Keyboard.h>

// PIN_FOOTSWITCH defined on pin 3: feel free to change by anything else
#define PIN_FOOTSWITCH 3

#define KEYB_SPACEBAR   0x20

void setup() {
  pinMode(PIN_FOOTSWITCH, INPUT_PULLUP);
}

void loop() {
  while (digitalRead(PIN_FOOTSWITCH) == HIGH) {
    delay(5);
  }

  Keyboard.press(KEYB_SPACEBAR);
  
  while (digitalRead(PIN_FOOTSWITCH) == LOW) {
    delay(5);
  }

  Keyboard.releaseAll();
}
