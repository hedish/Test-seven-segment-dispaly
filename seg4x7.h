#ifndef SEG4x7_H
#define SEG4x7_H

#include <Arduino.h>

class seg4x7
{
  public:
    seg4x7(int segA, int segB, int segC, int segD, int segE, int segF, int segG, int segDP, int DIG1, int DIG2, int DIG3, int DIG4);
    void showNum(int num);
  private:
    int _segA, _segB, _segC, _segD, _segE, _segF, _segG, _segDP, _dig1, _dig2, _dig3, _dig4;
    void zero();
    void one();
    void two();
    void three();
    void four();
    void five();
    void six();
    void seven();
    void eight();
    void nine();
    void showDig(int dig);
};

#endif SEG4x7_H
