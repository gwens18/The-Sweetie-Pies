// constants won't change. They're used here to set pin numbers:
unsigned long currentTime;
unsigned long prevTime = 0;
int timerLength = 2000; 
const int buttonPin = 2;  // the number of the pushbutton pin
int buttonState = 0;
int prevbuttonState;
int delayT = 1000;
const int led1 = 13;    // the number of the LED pin
const int led2 = 12;
const int led3 = 11;
const int led4 = 10;
const int led5 = 9;
const int led6 = 8;
// variables will change:
 // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
  currentTime= millis();
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);
 if(currentTime - prevTime > timerLength) {
  prevTime = currentTime;
 }
 if(buttonState == HIGH) {
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH);
 } else{
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
 }

}

