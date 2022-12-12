int POT;
int BRILLO = 0;
int LED = 3;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  pinMode(PUSH, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(2) == HIGH){
    BRILLO = analogRead(POT) / 4;
    digitalWrite(LED, BRILLO);
    }else{
      digitalWrite(3, LOW);
      }
}
