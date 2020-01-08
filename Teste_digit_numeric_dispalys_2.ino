//affiche le numero 1 et 2 et 3 et 4 en meme temp
 #define SEGA 2
 #define SEGB 6
 #define SEGC 9
 #define SEGD 11
 #define SEGE 12
 #define SEGF 3
 #define SEGG 8
 #define SEGDP 10

#define DIG1 1
#define DIG2 4
#define DIG3 5
#define DIG4 7
 
#define SEGON LOW
#define SEGOFF HIGH
#define DIGON HIGH
#define DIGOFF LOW 

void setup() {
  


 

 
  pinMode(SEGA, OUTPUT);
  pinMode(SEGB, OUTPUT);
  pinMode(SEGC, OUTPUT);
  pinMode(SEGD, OUTPUT);
  pinMode(SEGE, OUTPUT);
  pinMode(SEGF, OUTPUT);
  pinMode(SEGG, OUTPUT);
  pinMode(SEGDP, OUTPUT);
  
  pinMode(DIG1, OUTPUT);
  pinMode(DIG2, OUTPUT);
  pinMode(DIG3, OUTPUT);
  pinMode(DIG4, OUTPUT);

  
  digitalWrite(SEGA, SEGON);

} 
void one() {
  digitalWrite(SEGA, SEGOFF);
  digitalWrite(SEGB, SEGON);
  digitalWrite(SEGC, SEGON);
  digitalWrite(SEGD, SEGOFF);
  digitalWrite(SEGE, SEGOFF);
  digitalWrite(SEGF, SEGOFF);
  digitalWrite(SEGG, SEGOFF);
  digitalWrite(SEGDP, SEGOFF);
}
void two() {
  digitalWrite(SEGA, SEGON);
  digitalWrite(SEGB, SEGON);
  digitalWrite(SEGC, SEGOFF);
  digitalWrite(SEGD, SEGON);
  digitalWrite(SEGE, SEGON);
  digitalWrite(SEGF, SEGOFF);
  digitalWrite(SEGG, SEGON);
  digitalWrite(SEGDP, SEGOFF);
}
void three() {
  digitalWrite(SEGA, SEGON);
  digitalWrite(SEGB, SEGON);
  digitalWrite(SEGC, SEGON);
  digitalWrite(SEGD, SEGON);
  digitalWrite(SEGE, SEGOFF);
  digitalWrite(SEGF, SEGOFF);
  digitalWrite(SEGG, SEGON);
  digitalWrite(SEGDP, SEGOFF);
}
void four() {
  digitalWrite(SEGA, SEGOFF);
  digitalWrite(SEGB, SEGON);
  digitalWrite(SEGC, SEGON);
  digitalWrite(SEGD, SEGOFF);
  digitalWrite(SEGE, SEGOFF);
  digitalWrite(SEGF, SEGON);
  digitalWrite(SEGG, SEGON);
  digitalWrite(SEGDP, SEGOFF);
}
void five() {
  digitalWrite(SEGA, SEGON);
  digitalWrite(SEGB, SEGOFF);
  digitalWrite(SEGC, SEGON);
  digitalWrite(SEGD, SEGON);
  digitalWrite(SEGE, SEGOFF);
  digitalWrite(SEGF, SEGON);
  digitalWrite(SEGG, SEGON);
  digitalWrite(SEGDP, SEGOFF);
}
void six() {
  digitalWrite(SEGA, SEGON);
  digitalWrite(SEGB, SEGOFF);
  digitalWrite(SEGC, SEGON);
  digitalWrite(SEGD, SEGON);
  digitalWrite(SEGE, SEGON);
  digitalWrite(SEGF, SEGON);
  digitalWrite(SEGG, SEGON);
  digitalWrite(SEGDP, SEGOFF);
}
void seven() {
  digitalWrite(SEGA, SEGON);
  digitalWrite(SEGB, SEGON);
  digitalWrite(SEGC, SEGON);
  digitalWrite(SEGD, SEGOFF);
  digitalWrite(SEGE, SEGOFF);
  digitalWrite(SEGF, SEGOFF);
  digitalWrite(SEGG, SEGOFF);
  digitalWrite(SEGDP, SEGOFF);
}

void eight() {
  digitalWrite(SEGA, SEGON);
  digitalWrite(SEGB, SEGON);
  digitalWrite(SEGC, SEGON);
  digitalWrite(SEGD, SEGON);
  digitalWrite(SEGE, SEGON);
  digitalWrite(SEGF, SEGON);
  digitalWrite(SEGG, SEGON);
  digitalWrite(SEGDP, SEGOFF);
}
void nine() {
  digitalWrite(SEGA, SEGON);
  digitalWrite(SEGB, SEGON);
  digitalWrite(SEGC, SEGON);
  digitalWrite(SEGD, SEGON);
  digitalWrite(SEGE, SEGOFF);
  digitalWrite(SEGF, SEGON);
  digitalWrite(SEGG, SEGON);
  digitalWrite(SEGDP, SEGOFF);
}

void zero(){
  digitalWrite(SEGA, SEGON);
  digitalWrite(SEGB, SEGON);
  digitalWrite(SEGC, SEGON);
  digitalWrite(SEGD, SEGON);
  digitalWrite(SEGE, SEGON);
  digitalWrite(SEGF, SEGON);
  digitalWrite(SEGG, SEGOFF);
  digitalWrite(SEGDP, SEGOFF);
}
#define VIIVE 400
#define UP 1
#define DOWN -1
int i=0;
int dir=UP;

void showNum (int x) {
   switch(x){
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


void loop(){
  int num = 1234;  
  int a=0, b=0, c=0, d=0;
  d=num%10;
  num/=10;
  c=num%10;
  num/=10;
  b=num%10;
  num/=10;
  a=num%10;

  //Näytä tuhannet
  digitalWrite(DIG1, DIGON);
  showNum(a);
  delay (1);
  digitalWrite(DIG1, DIGOFF);

  //Näytä sadat
  digitalWrite(DIG2, DIGON);
  showNum(b);
  delay (1);
  digitalWrite(DIG2, DIGOFF);

  //Näytä kymmenet
    digitalWrite(DIG3, DIGON);
  showNum(c);
  delay (1);
  digitalWrite(DIG3, DIGOFF);

  //Näytä ykköset
digitalWrite(DIG4, DIGON);
  showNum(d);
  delay (1);
  digitalWrite(DIG4, DIGOFF);


 

  
  }
