// *************************
//
// Robotics AI Lab
//
// *************************

// LED Blink
// This code controls LED blink frequency

// Electronics used
// - Mercury Development Board

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}
