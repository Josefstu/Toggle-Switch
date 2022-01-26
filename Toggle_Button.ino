// constants won't change. They're used here to
// set pin numbers:
const int buttonPin = 2;     // the number of the pushbutton pin
const int ledPin1 =  13;      // the number of the LED pin
const int ledPin2 =  11;
const int ledPin3 =  10;
const int ledPin4 =  9;
const int ledPin5 =  8;

// variables will change:
int buttonState = 0;   // variable for reading the pushbutton status
int LEDstate = 0;
int TOGGLE_FLAG = 0;

void setup() {
  // initialize the LED pin as an output:
  Serial.begin(9600);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}

void loop() {

  int X;
  X = 200;
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);
  LEDstate = digitalRead(ledPin1);
  LEDstate = digitalRead(ledPin2);


  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState == HIGH && LEDstate == LOW) {
    // turn LED on:
    digitalWrite(ledPin1, HIGH);
    delay(X);
    digitalWrite(ledPin2, HIGH);
    delay(X);
    digitalWrite(ledPin3, HIGH);
    delay(X);
    digitalWrite(ledPin4, HIGH);
    delay(X);
    digitalWrite(ledPin5, HIGH);
    Serial.println("Turning ledPin ON!");
    delay(1000);
  }
  if (buttonState == HIGH && LEDstate == HIGH) {
    digitalWrite(ledPin5, LOW);
    delay(X);
    digitalWrite(ledPin4, LOW);
    delay(X);
    digitalWrite(ledPin3, LOW);
    delay(X);
    digitalWrite(ledPin2, LOW);
    delay(X);
    digitalWrite(ledPin1, LOW);
    Serial.println("Turning ledPin OFF!");
    delay(1000);
  }
}
