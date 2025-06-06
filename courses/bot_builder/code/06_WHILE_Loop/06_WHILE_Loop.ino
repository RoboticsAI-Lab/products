// *************************
//
// Robotics AI Lab
//
// *************************

// WHILE Loop
// This code showcases use of while loop

// Electronics used
// - Mercury Development Board

void setup() {
  Serial.begin(115200);
}

int i = 0;
void loop() {
  while (i <= 5) {
    Serial.println(i);
    i++;
  }
  delay(1000);
}
