int ledPin=13;
int trigPin=10;
int echoPin=9;
int duration,distance;
void setup() {
  pinMode(ledPin,OUTPUT);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(ledPin,LOW);

  // put your main code here, to run repeatedly:
  digitalWrite(trigPin,HIGH);
  delay(50);
  digitalWrite(trigPin,LOW);
  duration=pulseIn(echoPin,HIGH);
  distance=(duration/2)/29.1;
  if(distance<=30)
  digitalWrite(ledPin,HIGH);

  delay(50);
  if(distance>=30)
  digitalWrite(ledPin,LOW);
  delay(50);
  Serial.print("cm");
  Serial.println(distance);


}
