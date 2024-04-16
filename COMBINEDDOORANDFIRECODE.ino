#include <Servo.h>
const int buttonPin = 2;  // the number of the pushbutton pin
Servo doorServo;
Servo fireServo;


int buttonState = 0;  // variable for reading the pushbutton status

void setup() {
  doorServo.attach(7);
  doorServo.write(0);
  pinMode(buttonPin, INPUT);
  
  fireServo.attach(6);
  fireServo.write(0);
}

void loop() {
  
  buttonState = digitalRead(buttonPin);


    fireServo.write(0);
    fireServo.write(180);
 fireServo.write(0);
 //DOOR CODE -------------------------
 
  if (buttonState == HIGH) {
    // turn LED on:
    doorServo.write(180);
  } else {
    doorServo.write(0);
  }
  
}





