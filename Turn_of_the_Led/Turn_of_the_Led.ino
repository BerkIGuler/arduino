
//Turns the LED off when the brightness data gathered by photoresistor is below a certain level.
int led = 12;
int photoresistor = A0;
int brightness;
void setup() {
  // put your setup code here, to run once:
pinMode(led, OUTPUT);
digitalWrite(led, LOW);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
brightness = analogRead(photoresistor);
Serial.println(brightness);
if (brightness < 250){
  digitalWrite(led, HIGH);
}
else{digitalWrite(led, LOW);}

}
