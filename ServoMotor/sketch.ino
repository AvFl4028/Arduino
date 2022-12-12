#include <Servo.h>

Servo Servo1;

int PinServo = 2;
int PulsoMax = 1000;
int PulsoMin = 2000;
int ValorPot = 2;
int Angulo = 2;
int Pot = 0;
int LED = 3;
int Bright;

void setup()
{
    Servo1.attach(PinServo);
    pinMode(LED, OUTPUT);
}

void loop()
{
	ValorPot = analogRead(Pot);
    Bright = ValorPot / 4;
    Angulo = map(ValorPot, 0, 1023, 0, 180);
    Servo1.write(Angulo);
    analogWrite(LED, Bright);
}