// *************************
//
// Robotics AI Lab
//
// *************************

// LED Dynamic Show
// This code displays a LED Dynamic Show with
// PWM control and delay() to implement smooth transition effects.

// Electronics used
// - Mercury Development Board

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
  for (int brightness = 250; brightness >= 0; brightness--) {
    analogWrite(LED_BUILTIN, 255 - brightness);
    delay(2);
  }
}
