// *************************
//
// Robotics AI Lab
//
// *************************

// Sum Function
// This code showcases how "Functions" work in Arduino environment

// Electronics used
// - Mercury Development Board

int num1, num2;

void setup() {
  Serial.begin(115200);
  delay(2000);
  Serial.print("Enter first number: ");
}

void loop() {
  if (Serial.available() > 0) {
    num1 = Serial.parseInt();
    Serial.println(num1);
    Serial.print("Enter second number to add: ");
    // if (Serial.read() == '\n') {}
    while (!Serial.available()) {}
    num2 = Serial.parseInt();
    Serial.println(num2);
    int total = sum(num1, num2);
    Serial.print("Sum of given numbers is: ");
    Serial.println(total);
    Serial.println("");
    Serial.print("Enter first number: ");
    // if (Serial.read() == '\n') {}
  }
}

int sum(int a, int b) {
  return a + b;
}

