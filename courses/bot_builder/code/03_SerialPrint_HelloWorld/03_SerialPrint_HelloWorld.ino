// *************************
//
// Robotics AI Lab
//
// *************************

// Serial Monitor
// This code showscases use of Serial Monitor
// Difference between println and print

// Electronics used
// - Mercury Development Board

void setup() {
  Serial.begin(115200);
}

void loop() {
  Serial.print("Hello World!");
  delay(2000);
}
