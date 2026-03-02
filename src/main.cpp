#include<Arduino.h>
/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// give it a name:
int led = 2;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);     
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(led, LOW);   
  Serial.println("ON");
  delay(500);               // wait for a second
  digitalWrite(led, HIGH);    
  Serial.println("OFF");
  delay(500);      
}