int led5 = 13;
int led4 = 12;
int led3 = 11;
int led2 = 10;
int led1 = 9;
int trigPin = 7;
int echoPin = 8;
long duration;
int distance;
void setup() 
{
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
pinMode(led5, OUTPUT);
pinMode(led4, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led1, OUTPUT);
Serial.begin(9600); 
}
void loop() 
{
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance= duration*0.034/2;
Serial.print("Distance: ");
Serial.println(distance);
if ( distance >= 20 ) 
 {
digitalWrite (led1 , HIGH );
  delay(2000);
  digitalWrite (led1, LOW );
 } 
else if (distance >= 15  && distance <20)
{
digitalWrite (led2 , HIGH );
  delay(2000);
  digitalWrite (led2, LOW );
 }
else if ( distance >= 10  && distance <15 ) 
 {
digitalWrite (led3 , HIGH );
  delay(2000);
  digitalWrite (led3, LOW );
 } 
else if (distance >= 5  && distance <10)
{
digitalWrite (led4 , HIGH );
  delay(2000);
  digitalWrite (led4, LOW );
 }
 else
 {
digitalWrite (led5 , HIGH );
  delay(2000);
  digitalWrite (led5, LOW );
 }
 
}