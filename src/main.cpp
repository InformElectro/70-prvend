#include <Arduino.h>

#define TURN_TIME   1000

void setup() 
{
    Serial.begin(BAUD_RATE);
    pinMode(MOTOR,OUTPUT);
    pinMode(MICRO,INPUT_PULLUP);
    pinMode(GO,INPUT_PULLUP);
}

void loop() 
{
    unsigned long start, end;

    while(digitalRead(GO) == HIGH )
    ;
    digitalWrite(MOTOR,HIGH);
    start = millis();
    delay(TURN_TIME/2);         /*  Time for MICRO go HIGH  */

    while(digitalRead(MICRO) == HIGH )
    ;
    digitalWrite(MOTOR,LOW);
    end = millis();

    Serial.printf("Turn time = %lu msecs\n", end - start);

    while(digitalRead(GO) == LOW )
    ;
}
