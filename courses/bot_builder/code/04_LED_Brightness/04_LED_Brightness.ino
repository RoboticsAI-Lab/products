// *************************
//
// Robotics AI Lab
//
// *************************

// LED Brighness
// This code controls LED Brighness
// Showcases use of variable

// Electronics used
// - Mercury Development Board

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

int brightness = 0;
// acceptable brightness value between 0 and 255
// 0    -> 0% brightness (OFF)
// 255  -> 100% brightness (fully ON)
// any value between 0 and 255, LED will be dim

void loop() {
  brightness = 100;
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);

  brightness = 200;
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}
