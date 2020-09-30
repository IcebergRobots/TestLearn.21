
void setup()
{
    pinMode(38, OUTPUT);
    pinMode(40, OUTPUT);
    pinMode(12, OUTPUT);

}

void loop()
{
     for (int i = 255; i > -255; i--)
        {
            motorAn(i);
            delay(10);
        }

    
}
void motorAn(int power)
{
    if (power < 0)
    {
        digitalWrite(38,LOW);
        digitalWrite(40,HIGH);
        power= -power;
       
    
    }
    else
    {
        digitalWrite(38,HIGH);
        digitalWrite(40,LOW);
    }
 
    analogWrite(12,power);
    
}
