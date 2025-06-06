// *************************
//
// Robotics AI Lab
//
// *************************

// FOR Loop
// This code showcases use of for loop

// Electronics used
// - Mercury Development Board

void setup() {
  Serial.begin(115200);
}

void loop() {
  for (int i = 0; i <= 5; i++) {
    Serial.println(i);
    delay(1000);
  }
}
