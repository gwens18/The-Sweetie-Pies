int sensorVal;
const int sensorPin = A0;
const int ledPin = 9;
int ledBrightness;
const int buttonPin = 2;
int buttonState = 0;
int prevButtonState;
const byte piezoPin = 8;
unsigned long PreviousPeriodStart;
const int onDuration = 1000;
const int timebetweensound = 6000;

bool isOn = false;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorVal = analogRead(A0);
  Serial.println(sensorVal);
  //analogWrite(ledPin, ledBrightness);
  //ledBrightness = map(sensorVal, 0, 110, 110, 6);
  buttonState = digitalRead(buttonPin);

  if (prevButtonState != buttonState) {
    if (buttonState == HIGH) {
      isOn = !isOn;
    }
  }

  if (isOn) {
    if (analogRead(sensorPin) < 100) {
      digitalWrite(ledPin, HIGH);
      tone(piezoPin, 650);
    } else {
      digitalWrite(ledPin, LOW);
      noTone(piezoPin);
    }
  } else {
    digitalWrite(ledPin, LOW);
    noTone(piezoPin);
  }

  prevButtonState = buttonState;
}
