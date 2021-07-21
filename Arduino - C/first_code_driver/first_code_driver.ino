/*
  DigitalReadSerial
 Reads a digital input on pin 2, prints the result to the serial monitor

 This example code is in the public domain.
 */

// digital pin 2 has a pushbutton attached to it. Give it a name:
int pushButton;
int i;

void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  
  
 
}


void loop() {

   for (i = 0; i<5; i++){
    
    int a;
    int b;
    int c;
    int d;
    if (i==1){
      a = i;
      b = 2;
      c = 3;
      d = 4;
    }
    else if (i == 2){
      a = i;
      b = 3;
      c = 4;
      d = 1;
    }
    else if (i == 3){
      a = i;
      b = 4;
      c = 1;
      d = 2;
    }
    else if (i == 4){
      a = i;
      b = 1;
      c = 2;
      d = 3;
    }
    
   /* pinMode(a, OUTPUT);
    pinMode(b, OUTPUT);
    pinMode(c, OUTPUT);
    pinMode(d, OUTPUT);
    */
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
  }

 
}



