// Copyright 2020 Amir Tadros

const int BUTTON_PIN = 2;
const int GREEN_PIN = 3;
const int RED1_PIN = 4;
const int RED2_PIN = 5;

const int DELAY = 250;

void setup() {
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(RED1_PIN, OUTPUT);
  pinMode(RED2_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT);
}

void loop() {
  int buttonState = digitalRead(BUTTON_PIN);

  if (buttonState == LOW) {
    digitalWrite(GREEN_PIN, HIGH);
    digitalWrite(RED1_PIN, LOW);
    digitalWrite(RED2_PIN, LOW);
  } else {
    digitalWrite(GREEN_PIN, LOW);
    digitalWrite(RED1_PIN, LOW);
    digitalWrite(RED2_PIN, HIGH);

    delay(DELAY);

    digitalWrite(RED1_PIN, HIGH);
    digitalWrite(RED2_PIN, LOW);

    delay(DELAY);
  }
}
