float temp;
int tempsensorPin = 0; 

void setup()
{
  Serial.begin(9600); 
}
 
void loop()
{
  temp = analogRead(tempsensorPin);
  Serial.print("Analog Reading: ");
  Serial.print (temp);
  Serial.println(" ");

  temp = temp * 0.48828125; // 500mV/1024=.48828125
  Serial.print("CELSIUS: ");
  Serial.print(temp);
  Serial.println("*C ");

  temp = temp * 9 / 5;
  temp = temp + 32;
  Serial.print("FAHRENHEIT: ");
  Serial.print(temp);
  Serial.println("*F");
  
  delay(1000);

}
