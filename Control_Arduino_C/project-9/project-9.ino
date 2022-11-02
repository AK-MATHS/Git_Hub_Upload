
#include <dht.h>

dht DHT;

#define DHT11_PIN 7

volatile int turn = 0;
volatile int direction_;


void setup() {
  // put your setup code here, to run once:
  
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  
  Serial.begin(9600);

}


    
void clockwiserotate(){
  step1();
  step2();
  step3();
  step4();
  step5();
  step6();
  step7();
  step8();
}

/*void counterclockwiserotate(){
  step1();
  step7();
  step6();
  step5();
  step4();
  step3();
  step2();
  step1();
}
*/
void step1() {
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  delay(3);
}
void step2() {
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  delay(3);
}
void step3() {
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  delay(3);
}
void step4() {
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  delay(3);
}
void step5() {
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  delay(3);
}
void step6() {
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  delay(3);
}
void step7() {
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  delay(3);
}
void step8() {
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  delay(3);
}
void sleep() {
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  delay(3);
}

void loop() {
  int chk = DHT.read11(DHT11_PIN);
  Serial.print("Temperature = ");
  Serial.println(DHT.temperature);
  Serial.print("Humidity = ");
  Serial.println(DHT.humidity);
  delay(1);
  
  
  int i;

  
  
  if (DHT.temperature>=30) {   
    for (i=0;i<50;i++) { 
      clockwiserotate();
    }
     
  //return;
   
}
}
