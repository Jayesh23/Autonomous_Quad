/*
 PROJECT: SensoDuino 0.17 
 PROGRAMMER: Hazim Bitar (techbitar at gmail dot com)
 DATE: Sep 30, 2013
 FILE: sensoduino.ino
 LICENSE: Public domain
 */

// Replace sensor numbers with Names
#include<NewPing.h>


#define TRIGGER_PIN   12
#define ECHO_PIN      11
#define MAX_DISTANCE 200

NewPing sonar( TRIGGER_PIN , ECHO_PIN , MAX_DISTANCE );

void setup() {
  Serial.begin(9600);
  }

void loop()
{
    unsigned int uS = sonar.ping();
    Serial.print(uS);
    Serial.println("-----------------------");
    delay(200);
  }



