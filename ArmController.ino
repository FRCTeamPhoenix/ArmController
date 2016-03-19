// Simple example application that shows how to read four Arduino
// digital pins and map them to the USB Joystick library.
//
// The digital pins 9, 10, 11, and 12 are grounded when they are pressed.
//
// NOTE: This sketch file is for use with Arduino Leonardo and
//       Arduino Micro only.
//
// by Matthew Heironimus
// 2015-11-20
//--------------------------------------------------------------------

#include <Joystick.h>


int button1 = 6;
int button2 = 7;
int button3 = 8;
int button4 = 9;
int button5 = 10;
int buttonState1 = 0;
int buttonState2 = 0;
int buttonState3 = 0;
int buttonState4 = 0;
int buttonState5 = 0;


void setup() {
  // Initialize Button Pins
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(button3, INPUT);
  pinMode(button4, INPUT);
  pinMode(button5, INPUT);

  // Initialize Joystick Library
  Joystick.begin();
}

// Constant that maps the phyical pin to the joystick button.
const int pinToButtonMap = 2;

// Last state of the button
int lastButtonState[5] = {0, 0, 0, 0, 0};

void loop() {

buttonState1 = digitalRead(button1);
if (buttonState1 == HIGH) {
  Joystick.setButton(0, 1);
}
else if (buttonState1 == LOW) {
  Joystick.setButton(0, 0);
}

buttonState2 = digitalRead(button2);
if (buttonState2 == HIGH) {
  Joystick.setButton(1, 1);
}
else if (buttonState2 == LOW) {
  Joystick.setButton(1, 0);
}

buttonState3 = digitalRead(button3);
if (buttonState3 == HIGH) {
  Joystick.setButton(2, 1);
}
else if (buttonState3 == LOW) {
  Joystick.setButton(2, 0);
}

buttonState4 = digitalRead(button4);
if (buttonState4 == HIGH) {
  Joystick.setButton(3, 1);
}
else if (buttonState4 == LOW) {
  Joystick.setButton(3, 0);
}

buttonState5 = digitalRead(button5);
if (buttonState5 == HIGH) {
  Joystick.setButton(4, 1);
}
else if (buttonState5 == LOW) {
  Joystick.setButton(4, 0);
}

  // Read pin values
  /*for (int index = 0; index < 12; index++)
  {
    int currentButtonState = digitalRead(index + pinToButtonMap);
    if (currentButtonState != lastButtonState[index])
    {
      Joystick.setButton(index, currentButtonState);
      lastButtonState[index] = currentButtonState;
    }
  }*/

  delay(50);
}
