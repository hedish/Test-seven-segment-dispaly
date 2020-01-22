#include "seg4x7.h"

//mittari metrimitta(A0, A1);// Luokan ilmentymä
seg4x7 disp(11, 7, 4, 2, 1, 10, 5, 3, 12, 9, 8, 6);// Luokan ilmentymä


void setup() {
  

}



void loop(){
  /*

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  int distanceCM = duration * 0.034 /2;

  Serial.println(distanceCM);
*/
  disp.showNum(1234);
  
}
