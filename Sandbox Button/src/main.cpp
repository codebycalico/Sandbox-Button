#include <Arduino.h>
#include <Bounce2.h>

#define BUTTON_PIN 1
#define KEY KEY_UP

bool prevPressed = false;

Bounce2::Button testButton = Bounce2::Button();

void setup() {
  testButton.attach(BUTTON_PIN, INPUT_PULLUP);
  testButton.interval(5);
  testButton.setPressedState(LOW);
  Serial.begin(9600);
  Keyboard.begin();
}

void loop() {
  testButton.update();

  // //This code alternates between presses.
  // //If it is pressed once that turns it on, if it is pressed again,
  // //that turns it off. This is taken care of in the Unity script
  // //but I added the functionality here too if we need it in the future.
  // if(testButton.pressed()){
  //   if(prevPressed == false) {
  //     prevPressed = true;
  //     Keyboard.press(KEY);
  //     Serial.println("Up pressed.");
  //     Keyboard.releaseAll();
  //     delay(20);
  //   } else {
  //     prevPressed = false;
  //     Keyboard.press(KEY);
  //     Serial.println("Up pressed again.");
  //     Keyboard.releaseAll();
  //     delay(20);
  //   }
  //}

  if(testButton.pressed()){
    Keyboard.press(KEY);
    Keyboard.releaseAll();
  }
}