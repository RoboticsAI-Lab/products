// *************************
//
// Robotics AI Lab
//
// *************************

// RGB Traffic Light
// This code displays a RGB Traffic Light with onboard WS2812 RGB LED.
// Using the Adafruit NeoPixel Library, different LED colors are produced.
// This tutorial focuses on color mixing in RGB LED to produce yellow/amber

// Electronics used
// - Mercury Development Board

#include <Adafruit_NeoPixel.h>

#define LED_PIN RGB
#define NUM_PIXELS 1  // Number of LEDs

Adafruit_NeoPixel pixels(NUM_PIXELS, LED_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  pixels.begin();  // Initialize the LED
}

void loop() {

  pixels.setPixelColor(0, pixels.Color(0, 255, 0, 0));    // Green
  pixels.show();
  delay(2000);

  pixels.setPixelColor(0, pixels.Color(255, 90, 0, 0));   // Amber
  pixels.show();
  delay(1000);

  pixels.setPixelColor(0, pixels.Color(255, 0, 0, 0));    // Red
  pixels.show();
  delay(2000);
}
