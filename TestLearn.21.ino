#include "Arduino.h"

#define PIN_MOTOR1_DIR_A 38
#define PIN_MOTOR1_PWR 12
#define PIN_MOTOR1_DIR_B 40

void setup()
{ 
    pinMode(PIN_MOTOR1_DIR_A, OUTPUT);
    pinMode(PIN_MOTOR1_DIR_B,OUTPUT);
    pinMode(PIN_MOTOR1_PWR,OUTPUT);
}

void loop()
{
    for (int i = -255; i < 255; i++)
    {
        motorAn(i);
        delay(10);
    }
    for (int i = 255; i > -255; i--)
    {
        motorAn(i);
        delay(10);
    }
   
// void loop()
// {
//     digitalWrite (pinDirA1,HIGH);
//     digitalWrite (40,LOW);

//     for (int a = 0; a < 256; a++)
//     {
//         analogWrite(12,a);
//         delay(20);
//     }
    
//     for (int i = 255; i >= 0; i--)
//     {
//         analogWrite(12,i);
//         delay(20);
//     }
}

void motorAn(int power)
{
    if (power<0)
    {
        digitalWrite (PIN_MOTOR1_DIR_A, LOW);
        digitalWrite (PIN_MOTOR1_DIR_B,HIGH); 

        power = -power;
    }
    else
    {
        digitalWrite (PIN_MOTOR1_DIR_A, HIGH);
        digitalWrite (PIN_MOTOR1_DIR_B,LOW); 

     
    }
    
    
    analogWrite (PIN_MOTOR1_PWR,power);  
}   
void motorAus()
{
    digitalWrite (PIN_MOTOR1_DIR_A, LOW);
    digitalWrite (PIN_MOTOR1_DIR_B,LOW);  
    digitalWrite (PIN_MOTOR1_PWR,LOW);  
}
