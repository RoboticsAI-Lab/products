// *************************
//
// Robotics AI Lab
//
// *************************

// LED Brightness Control
// This code controls LED Brightness using User Input

// Electronics used
// - Mercury Development Board

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(115200);
  Serial.print("\nEnter a brightness value (0-255): ");
}

void loop() {
  if (Serial.available()) {
    int brightness = Serial.parseInt();
    while (Serial.available() != 0) {
      Serial.read();
    }
    analogWrite(LED_BUILTIN, 255 - brightness);
    Serial.println(brightness);
    Serial.print("Enter a brightness value (0-255): ");
  }
}
