#include <Arduino.h>
#include "seg4x7.h"

#define DIGON HIGH
#define DIGOFF LOW
#define SEGON LOW
#define SEGOFF HIGH


seg4x7::seg4x7(int segA, int segB, int segC, int segD, int segE, int segF, int segG, int segDP, int dig1, int dig2, int dig3, int dig4){
  _segA = segA;
  _segB = segB;
  _segC = segC;
  _segD = segD;
  _segE = segE;
  _segF = segF;
  _segG = segG;
  _segDP = segDP;
  _dig1 = dig1;
  _dig2 = dig2;
  _dig3 = dig3;
  _dig4 = dig4;
  pinMode(_segA, OUTPUT);
  pinMode(_segB, OUTPUT);
  pinMode(_segC, OUTPUT);
  pinMode(_segD, OUTPUT);
  pinMode(_segE, OUTPUT);
  pinMode(_segF, OUTPUT);
  pinMode(_segG, OUTPUT);
  pinMode(_segDP, OUTPUT);
  pinMode(_dig1, OUTPUT);
  pinMode(_dig2, OUTPUT);
  pinMode(_dig3, OUTPUT);
  pinMode(_dig4, OUTPUT);
}


void seg4x7::showDig(int dig){
  switch(dig){
    case 0:zero();break;
    case 1:one();break;
    case 2:two();break;
    case 3:three();break;
    case 4:four();break;
    case 5:five();break;
    case 6:six();break;
    case 7:seven();break;
    case 8:eight();break;
    case 9:nine();break;
  }
}
#define HOLDTIME 5000
unsigned long nextDig=micros();
int digit=4;
void seg4x7::showNum(int num){
  if((micros()-nextDig)>=HOLDTIME){
    nextDig +=HOLDTIME;
    digit--;
    if(digit==0){
      digit=4;
    }
  }
  num %= 10000;
  switch(digit){
    case 4:
      digitalWrite(_dig4, DIGON);
      showDig(num%10);
      digitalWrite(_dig4, DIGOFF);
    break;
    case 3:
      num /=10;
      digitalWrite(_dig3, DIGON);
      showDig(num%10);
      digitalWrite(_dig3, DIGOFF);  
    break;     
    case 2:
      num /=100;
      digitalWrite(_dig2, DIGON);
      showDig(num%10);
      digitalWrite(_dig2, DIGOFF);  
    break;     
    case 1:
      num /=1000;
      digitalWrite(_dig1, DIGON);
      showDig(num%10);
      digitalWrite(_dig1, DIGOFF);  
    break;     
  }
}

void seg4x7::one() {
  digitalWrite(_segA, SEGOFF);
  digitalWrite(_segB, SEGON);
  digitalWrite(_segC, SEGON);
  digitalWrite(_segD, SEGOFF);
  digitalWrite(_segE, SEGOFF);
  digitalWrite(_segF, SEGOFF);
  digitalWrite(_segG, SEGOFF);
  digitalWrite(_segDP, SEGOFF);
}
void seg4x7::zero() {
  digitalWrite(_segA, SEGON);
  digitalWrite(_segB, SEGON);
  digitalWrite(_segC, SEGON);
  digitalWrite(_segD, SEGON);
  digitalWrite(_segE, SEGON);
  digitalWrite(_segF, SEGON);
  digitalWrite(_segG, SEGOFF);
  digitalWrite(_segDP, SEGOFF);
}
void seg4x7::two() {
  digitalWrite(_segA, SEGON);
  digitalWrite(_segB, SEGON);
  digitalWrite(_segC, SEGOFF);
  digitalWrite(_segD, SEGON);
  digitalWrite(_segE, SEGON);
  digitalWrite(_segF, SEGOFF);
  digitalWrite(_segG, SEGON);
  digitalWrite(_segDP, SEGOFF);
}
void seg4x7::three() {
  digitalWrite(_segA, SEGON);
  digitalWrite(_segB, SEGON);
  digitalWrite(_segC, SEGON);
  digitalWrite(_segD, SEGON);
  digitalWrite(_segE, SEGOFF);
  digitalWrite(_segF, SEGOFF);
  digitalWrite(_segG, SEGON);
  digitalWrite(_segDP, SEGOFF);
}
void seg4x7::four() {
  digitalWrite(_segA, SEGOFF);
  digitalWrite(_segB, SEGON);
  digitalWrite(_segC, SEGON);
  digitalWrite(_segD, SEGOFF);
  digitalWrite(_segE, SEGOFF);
  digitalWrite(_segF, SEGON);
  digitalWrite(_segG, SEGON);
  digitalWrite(_segDP, SEGOFF);
}
void seg4x7::five() {
  digitalWrite(_segA, SEGON);
  digitalWrite(_segB, SEGOFF);
  digitalWrite(_segC, SEGON);
  digitalWrite(_segD, SEGON);
  digitalWrite(_segE, SEGOFF);
  digitalWrite(_segF, SEGON);
  digitalWrite(_segG, SEGON);
  digitalWrite(_segDP, SEGOFF);
}
void seg4x7::six() {
  digitalWrite(_segA, SEGON);
  digitalWrite(_segB, SEGOFF);
  digitalWrite(_segC, SEGON);
  digitalWrite(_segD, SEGON);
  digitalWrite(_segE, SEGON);
  digitalWrite(_segF, SEGON);
  digitalWrite(_segG, SEGON);
  digitalWrite(_segDP, SEGON);
}
void seg4x7::seven() {
  digitalWrite(_segA, SEGON);
  digitalWrite(_segB, SEGON);
  digitalWrite(_segC, SEGON);
  digitalWrite(_segD, SEGOFF);
  digitalWrite(_segE, SEGOFF);
  digitalWrite(_segF, SEGOFF);
  digitalWrite(_segG, SEGOFF);
  digitalWrite(_segDP, SEGOFF);
}
void seg4x7::eight() {
  digitalWrite(_segA, SEGON);
  digitalWrite(_segB, SEGON);
  digitalWrite(_segC, SEGON);
  digitalWrite(_segD, SEGON);
  digitalWrite(_segE, SEGON);
  digitalWrite(_segF, SEGON);
  digitalWrite(_segG, SEGON);
  digitalWrite(_segDP, SEGOFF);
}
void seg4x7::nine() {
  digitalWrite(_segA, SEGON);
  digitalWrite(_segB, SEGON);
  digitalWrite(_segC, SEGON);
  digitalWrite(_segD, SEGOFF);
  digitalWrite(_segE, SEGOFF);
  digitalWrite(_segF, SEGON);
  digitalWrite(_segG, SEGON);
  digitalWrite(_segDP, SEGON);
}
