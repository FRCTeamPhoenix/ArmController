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
int currentButtonState1 = 0;
int currentButtonState2 = 0;
int currentButtonState3 = 0;
int currentButtonState4 = 0;
int currentButtonState5 = 0;
int previousButtonState1 = 0;
int previousButtonState2 = 0;
int previousButtonState3 = 0;
int previousButtonState4 = 0;
int previousButtonState5 = 0;
int buttonDelay = 20;


void setup() {
  // Initialize Button Pins
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(button3, INPUT);
  pinMode(button4, INPUT);
  pinMode(button5, INPUT);

  //in this section we read the initial state off the buttons
  previousButtonState1 = digitalRead(button1);
  previousButtonState2 = digitalRead(button2);
  previousButtonState3 = digitalRead(button3);
  previousButtonState4 = digitalRead(button4);
  previousButtonState5 = digitalRead(button5);

  // Initialize Joystick Library
  Joystick.begin();
}

// Constant that maps the phyical pin to the joystick button.
const int pinToButtonMap = 2;

// Last state of the button
int lastButtonState[5] = {0, 0, 0, 0, 0};

void loop() {

currentButtonState1 = digitalRead(button1);
if (currentButtonState1 != previousButtonState1) {
  previousButtonState1 = currentButtonState1;
  if (currentButtonState1 == LOW) {
    delay(buttonDelay);
  }
  Joystick.setButton(0, currentButtonState1);
 //else if (currentButtonState1 == HIGH) {
  //Joystick.setButton(0, currentButtonState1);
  //}

}

currentButtonState2 = digitalRead(button2);
if (currentButtonState2 != previousButtonState2) {
  previousButtonState2 = currentButtonState2;
  if (currentButtonState2 == LOW) {
    delay(buttonDelay);
  }
  Joystick.setButton(1, currentButtonState2); 
}
/*}
else if (buttonState2 == LOW) {
  delay(buttonDelay);
  Joystick.setButton(1, 0);
}*/

currentButtonState3 = digitalRead(button3);
if (currentButtonState3 != previousButtonState3) {
  previousButtonState3 = currentButtonState3;
  if (currentButtonState3 == LOW) {
    delay(buttonDelay);
  }
  Joystick.setButton(2, currentButtonState3); 
}
/*else if (buttonState3 == LOW) {
  delay(buttonDelay);
  Joystick.setButton(2, 0);
}*/

currentButtonState4 = digitalRead(button4);
if (currentButtonState4 != previousButtonState4) {
  previousButtonState4 = currentButtonState4;
  if (currentButtonState4 == LOW) {
    delay(buttonDelay);
  }
  Joystick.setButton(3, currentButtonState4); 
}
/*else if (buttonState4 == LOW) {
  delay(buttonDelay);
  Joystick.setButton(3, 0);
}*/

currentButtonState5 = digitalRead(button5);
if (currentButtonState5 != previousButtonState5) {
  previousButtonState5 = currentButtonState5;
  if (currentButtonState5 == LOW) {
    delay(buttonDelay);
  }
  Joystick.setButton(4, currentButtonState5); 
}
/*else if (buttonState5 == LOW) {
  delay(buttonDelay);
  Joystick.setButton(4, 0);
}*/

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
