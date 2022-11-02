// Declare variables

float tempC;
int tempPin = 0; //Temp sensor plugged analog pin 0

//Write setup function

void setup(){
  Serial.begin(9600);
}
void loop(){
  tempC = analogRead(tempPin) + 970; // Taking the temp
  tempC = (5.0*tempC*100.0)/1024; //will convert the analog input to a temp in celscius
  tempC = (byte)tempC;

  tempC = tempC/10;
  Serial.println(tempC);
  delay(3000);
  
}

