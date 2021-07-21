#include "LM35.h"
void setup() {
  int sensorvalue= analogRead(A0);
  Serial.begin(9600);
}
void loop() {
    LM35 sensor1(A0); // Sensor connected to pin A0
    double temp = sensor1.read(); //Returns temperature based on a single reading
    double temp1 = sensor1.read(5); //Returns temperature based on 5 readings (more accurate but slower)
    Serial.println(temp1);
    delay(1000);
}
