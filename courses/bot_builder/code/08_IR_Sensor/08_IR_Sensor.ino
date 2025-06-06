// *************************
//
// Robotics AI Lab
//
// *************************

// IR Sensor
// This code how an IR Sensor output varies when
// the IR Sensor is pointed at white surface vs black surface

// Electronics used
// - Mercury Development Board
// - IR Module

int IR_SENSOR_PIN = D5;

void setup() {
  pinMode(IR_SENSOR_PIN, INPUT);
  Serial.begin(115200);
}

void loop() {
  int value = digitalRead(IR_SENSOR_PIN);
  Serial.print("Sensor value: ");
  Serial.println(value);
  delay(1000);
}
