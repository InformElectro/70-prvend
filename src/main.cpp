#include <Arduino.h>

#define TURN_TIME   1000

void setup() 
{
    Serial.begin(BAUD_RATE);
    pinMode(MOTOR,OUTPUT);
    pinMode(LED,OUTPUT);
    pinMode(MICRO,INPUT_PULLUP);
    pinMode(GO,INPUT_PULLUP);
    digitalWrite(LED,LOW);
    digitalWrite(MOTOR,LOW);
}

void loop() 
{
    unsigned long start,end;

    while(digitalRead(GO) == HIGH )
    ;
    start = millis();
    digitalWrite(LED,HIGH);
    digitalWrite(MOTOR,HIGH);
    delay(50);         /*  Time for MICRO go HIGH  */

    while(digitalRead(MICRO) == HIGH )
    ;
    digitalWrite(MOTOR,LOW);
    end = millis();
    digitalWrite(LED,LOW);

    Serial.printf("time = %lu\n", end-start);

    while(digitalRead(GO) == LOW )
    ;
    delay(100);
}
