/*
Date: 2022-09-12
Author: Cole Spiers
Student Number 000839039
*/

#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:

  Serial.begin(115200);

  Serial.println("\nHello World!");

  Serial.println("Name: Cole Spiers");
  Serial.println("Student Number: 000839039\n");


  Serial.println("Chip Id: " + String(ESP.getChipId()));
  Serial.println("Flash Chip Id: " + String(ESP.getFlashChipId()) + "\n\n");
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(String(millis()) + "milliseconds");
  delay(2000);
}