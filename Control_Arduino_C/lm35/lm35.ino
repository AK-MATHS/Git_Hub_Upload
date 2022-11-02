int pinoSensor = 0;
int valorLido;
float temperatura;
void setup() {
Serial.begin(9600);
}

void loop() {
valorLido = analogRead(pinoSensor);
temperatura = (valorLido * 0.00488);
temperatura = temperatura * 100.00;
Serial.print("Temperatura actual: ");
Serial.println(temperatura);
delay(1000);
}
