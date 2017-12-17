/*
Read All Uno Inputs
*/

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  int sensorValue = analogRead(A0);
  float voltage = sensorValue * (5.0 / 1023.0); //In case you want actual voltages
  Serial.print(sensorValue);
  Serial.print(",");
/**
  int sensorValue1 = analogRead(A1);
  float voltage1 = sensorValue1 * (5.0 / 1023.0); //In case you want actual voltages
  Serial.print(sensorValue1);
  Serial.print(",");

    int sensorValue2 = analogRead(A2);
  float voltage2 = sensorValue2 * (5.0 / 1023.0); //In case you want actual voltages
  Serial.print(sensorValue2);
  Serial.print(",");

    int sensorValue3 = analogRead(A3);
  float voltage3 = sensorValue3 * (5.0 / 1023.0); //In case you want actual voltages
  Serial.print(sensorValue3);
  Serial.print(",");

    int sensorValue4 = analogRead(A4);
  float voltage4 = sensorValue4 * (5.0 / 1023.0); //In case you want actual voltages
  Serial.print(sensorValue4);
  Serial.print(",");

    int sensorValue5 = analogRead(A5);
  float voltage5 = sensorValue5 * (5.0 / 1023.0); //In case you want actual voltages
  Serial.print(sensorValue5);

  Serial.print(",");

    int sensorValue6 = analogRead(A6);
  float voltage6g = sensorValue6 * (5.0 / 1023.0); //In case you want actual voltages
  Serial.print(sensorValue6);


  /**/
    Serial.println();

  
}
