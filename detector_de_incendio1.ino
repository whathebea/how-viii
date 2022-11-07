// C++ code
//

float temp;
int smoke;
int motorPin = 13;

void setup()
{
  	pinMode(A0,INPUT); 
	pinMode(A1, INPUT); 
	pinMode(motorPin,OUTPUT); 
	Serial.begin(9600); 
}

void loop()
{
  temp = analogRead(A1);
  temp = temp * 0.48828125;
  smoke = analogRead(A0);
	if (temp>=70 && smoke >= 100) { 
	digitalWrite(motorPin, HIGH);
	} 
	else { 
	digitalWrite(motorPin, LOW);
	} 
  
    Serial.print("Temperature= "); 
	Serial.print(" "); 
	Serial.print(temp); 
	Serial.print("\t"); 
	Serial.print("Smoke Sensor= "); 
	Serial.print(" "); 
	Serial.print(smoke); 
	Serial.println(); 
	delay(1000); 
  
}