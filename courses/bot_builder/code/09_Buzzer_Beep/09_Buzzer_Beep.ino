// *************************
//
// Robotics AI Lab
//
// *************************

// Buzzer Beep
// This code controls buzzer beep frequency

// Electronics used
// - Mercury Development Board
// - Buzzer

int BUZZER_PIN = D1;

void setup() {
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
  digitalWrite(BUZZER_PIN, HIGH);
  delay(1000);
  digitalWrite(BUZZER_PIN, LOW);
  delay(1000);
}
