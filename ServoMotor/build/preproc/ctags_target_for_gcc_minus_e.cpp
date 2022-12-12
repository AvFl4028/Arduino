# 1 "/home/avfl/Workspace/ServoMotor/test/test.ino"
# 2 "/home/avfl/Workspace/ServoMotor/test/test.ino" 2

Servo Servo1;

int PinServo = 2;
int LED = 3;
int Push1 = 4;
int Push2 = 5;

int Push1Value;
int Push2Value;

void setup()
{
    Servo1.attach(PinServo);
    pinMode(LED, 0x1);
    pinMode(Push1, 0x0);
    pinMode(Push2, 0x0);
}

void loop()
{
    Push1Value = digitalRead(Push1);
    Push2Value = digitalRead(Push2);

    if (Push1Value == 0x1 && Push2Value == 0x1)
    {
        Servo1.write(0);
        digitalWrite(LED, 0x0);
        delay(1000);
        Servo1.write(180);
        digitalWrite(LED, 0x1);
        delay(1000);
    }

    if (Push1Value == 0x1)
    {
        Servo1.write(90);
        digitalWrite(LED, 0x1);
    }
    else if (Push2Value == 0x1)
    {
        Servo1.write(0);
        digitalWrite(LED, 0x0);
    }
}
