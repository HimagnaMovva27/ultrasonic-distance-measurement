int trigPin = 10;
int echoPin = 9;
long time;
float distance;

void setup()
{
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 
  Serial.begin(9600); 
}

void loop()
{
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);

  
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(10, LOW);

  
  time=pulseIn(echoPin , HIGH);
  Serial.print("time: ");
  Serial.println(time);
  distance = time * 0.0343/2;

  
  Serial.print("Distance:");
  Serial.println(distance);

}