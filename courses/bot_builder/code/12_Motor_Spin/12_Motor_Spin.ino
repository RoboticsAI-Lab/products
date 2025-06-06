// *************************
//
// Robotics AI Lab
//
// *************************

// Motor Spin
// This code showcases how a motor can be rotated in
// clockwise and counter-clockwise direction

// Electronics used
// - Mercury Development Board
// - DC brushed motor

int MOTOR_1A = D3;
int MOTOR_1B = D1;

void setup() {
  pinMode(MOTOR_1A, OUTPUT);
  pinMode(MOTOR_1B, OUTPUT);
}

void loop() {
  digitalWrite(MOTOR_1A, HIGH);
  digitalWrite(MOTOR_1B, LOW);
  delay(2000);

  digitalWrite(MOTOR_1A, LOW);
  digitalWrite(MOTOR_1B, HIGH);
  delay(2000);
}
