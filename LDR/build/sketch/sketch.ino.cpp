#include <Arduino.h>
#line 1 "/home/avfl/Workspace/LDR/sketch.ino"
//#include <BoardNames.h>
//#include <MCreatorLink.h>
int LED = 3;
int LDR = 0;
int BRIGHT = 0;
int PWR;
int PUSH = 4;

#line 9 "/home/avfl/Workspace/LDR/sketch.ino"
void setup();
#line 18 "/home/avfl/Workspace/LDR/sketch.ino"
void loop();
#line 9 "/home/avfl/Workspace/LDR/sketch.ino"
void setup()
{
    Serial.begin(115200);
    //Serial.setTimeout(20);
    //MCreatorLink.setup(Serial);
    pinMode(LED, OUTPUT);
    pinMode(PUSH, INPUT);
}

void loop()
{
	//MCreatorLink.loop();
    BRIGHT = analogRead(LDR) / 4;
    PWR = map(BRIGHT, 0, 255, 255, 0);
    analogWrite(LED, BRIGHT);
    if (digitalRead(PUSH) == HIGH)
    {
        analogWrite(LED, PWR);
        Serial.println("Inverso: " + String(PWR));
    }
    else
    {
        analogWrite(LED, BRIGHT);
        Serial.println("Normal: " + String(BRIGHT));
    }

    delay(200);
}

