// *************************
//
// Robotics AI Lab
//
// *************************

// Burglar Alarm
// This code showcases a functioning burglar alarm

// Electronics used
// - Mercury Development Board
// - Buzzer
// - IR Sensor

int IR_PIN = D5;
int BUZZER_PIN = D6;

void setup() {
  pinMode(IR_PIN, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
  bool sensorValue = digitalRead(IR_PIN);
  if (sensorValue == HIGH) {
    digitalWrite(BUZZER_PIN, HIGH);
  } else {
    digitalWrite(BUZZER_PIN, LOW);
  }
  delay(500);
}
