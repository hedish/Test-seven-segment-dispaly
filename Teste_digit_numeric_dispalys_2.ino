#include "seg4x7.h"


#define ECHO 13
#define TRIG A0

unsigned long timeOut;
unsigned long mittaus;
unsigned long distance;
void setup() {
  pinMode(ECHO, INPUT);
  pinMode(TRIG, OUTPUT);
  Serial.begin(9600);
  timeOut=millis();//Kello nyt, millisekunnin tarkkuudella
  delay(1000);
}
int count=0;

//mittari metrimitta(A0, A1);// Luokan ilmentymä
seg4x7 disp(11, 7, 4, 2, A1, 10, 5, 3, 12, 9, 8, 6);// Luokan ilmentymä





#define TIMEOUT 500
int distanceCM=0;
void loop(){
  if((millis()-timeOut)>TIMEOUT){//Mittauksen ajastus
    timeOut+=TIMEOUT;
    digitalWrite(TRIG, HIGH);
    delayMicroseconds(10);
    digitalWrite(TRIG, LOW);
  }
  if(digitalRead(ECHO)==HIGH){
    if(count==0){//Nouseva reuna löytynyt
      mittaus=micros();
      count++;
    }
  }else{
    if(count!=0){//Laskeva reuna löytynyt
      distance = micros() - mittaus; 

      distanceCM = distance * 0.034 /2;
      
      Serial.println(distanceCM);
      
    }
    count=0;
  }
  if(distanceCM >=0 && distanceCM <=9999){
    disp.showNum(distanceCM);
  }
}
