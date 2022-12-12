#include <Arduino.h>
#line 1 "/home/avfl/Workspace/ServoMotor/test/test.ino"
#include <Servo.h>

Servo Servo1;

int PinServo = 2;
int LED = 3;
int Push1 = 4;
int Push2 = 5;

int Push1Value;
int Push2Value;

#line 13 "/home/avfl/Workspace/ServoMotor/test/test.ino"
void setup();
#line 21 "/home/avfl/Workspace/ServoMotor/test/test.ino"
void loop();
#line 13 "/home/avfl/Workspace/ServoMotor/test/test.ino"
void setup()
{
    Servo1.attach(PinServo);
    pinMode(LED, OUTPUT);
    pinMode(Push1, INPUT);
    pinMode(Push2, INPUT);
}

void loop()
{
    Push1Value = digitalRead(Push1);
    Push2Value = digitalRead(Push2);

    if (Push1Value == HIGH && Push2Value == HIGH)
    {
        Servo1.write(0);
        digitalWrite(LED, LOW);
        delay(1000);
        Servo1.write(180);
        digitalWrite(LED, HIGH);
        delay(1000);
    }

    if (Push1Value == HIGH)
    {
        Servo1.write(90);
        digitalWrite(LED, HIGH);
    }
    else if (Push2Value == HIGH)
    {
        Servo1.write(0);
        digitalWrite(LED, LOW);
    }
}
