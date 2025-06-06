// *************************
//
// Robotics AI Lab
//
// *************************

// Distance Measurement using Ultra sonic sensor
// This code showcases a application of USS to measure distance

// Electronics used
// - Mercury Development Board
// - Ultrasonic Sensor (HC SR04)

int uss_trigPin = USST;
int uss_echoPin = USSE;
double uss_distance = 0.0;

void setup() {
  pinMode(uss_trigPin, OUTPUT);
  pinMode(uss_echoPin, INPUT);
  Serial.begin(115200);
  delay(1000);
}

void loop() {
  digitalWrite(uss_trigPin, LOW);
  delayMicroseconds(10);
  digitalWrite(uss_trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(uss_trigPin, LOW);
  long echo_time = pulseIn(uss_echoPin, HIGH);
  uss_distance = echo_time * 0.034 / 2;
  Serial.print("Distance measured: ");
  Serial.println(uss_distance);
  delay(1000);
}
