#include <SoftwareSerial.h>

SoftwareSerial mySerial(2, 3); // RX, TX  
// Connect HC-06      Arduino Uno
//     Pin 1/TXD          Pin 7
//     Pin 2/RXD          Pin 8

#define LED1 4

#define LED2 5

#define LED3 6

void setup() {

  mySerial.begin(9600);
  mySerial.println("mySerial OPEN");
  
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);

}

void loop(){

  if(mySerial.available()){
    
    myChar = mySerial.read();

    switch(myChar){
      
      case 'a':
        digitalWrite(LED1,HIGH);
        break;

      case 'A':
        digitalWrite(LED1,LOW);
        break;

      case 'b':
        digitalWrite(LED2,HIGH);
        break;

      case 'B':
        digitalWrite(LED2,LOW);
        break;

      case 'c':
        digitalWrite(LED3,HIGH);
        break;

      case 'C':
        digitalWrite(LED3,LOW);
        break;

      case 'd':
        digitalWrite(LED1,HIGH);
        digitalWrite(LED2,HIGH);
        digitalWrite(LED3,HIGH);
        break;

      case 'D':
        digitalWrite(LED1,LOW);
        digitalWrite(LED2,LOW);
        digitalWrite(LED3,LOW);
        break;

      default:
        mySerial.println("Opcion invalida");
        break;

    }

  }

}
