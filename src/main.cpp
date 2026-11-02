#include <Arduino.h>


// Area of a rectangle
float calculateArea(float length, float width) {
  return length * width;
}

// Volume of a rectangular box
float calculateVolume(float length, float width, float height) {
  return calculateArea(length, width) * height;
}

void setup() {
  Serial.begin(9600);
  Serial.println("Hello, World!");

  float length = 5.0;
  float width = 3.0;
  float height = 2.0;

  Serial.print("Area: ");
  Serial.println(calculateArea(length, width));

  Serial.print("Volume: ");
  Serial.println(calculateVolume(length, width, height));
}

void loop() {
}

