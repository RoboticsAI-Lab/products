// *************************
//
// Robotics AI Lab
//
// *************************

// Serial Monitor
// This code showscases use of Serial Monitor
// By printing "Hello World!" once every two seconds.

// Electronics used
// - Mercury Development Board

void setup() {
  Serial.begin(115200);
}

void loop() {
  Serial.println("Hello World!");
  delay(2000);
}
