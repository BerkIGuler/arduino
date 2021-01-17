
void setup() {
pinMode(13, OUTPUT);
Serial.begin(9600);
digitalWrite(13, LOW);
Serial.println("Type 1 to turn the LED on and 0 to turn it off");
}

void loop() {
if (Serial.available()){
int bval = Serial.read();
if (bval == '1'){
  digitalWrite(13, HIGH);
  Serial.println("Turned on!");
}
else if (bval == '0'){
  digitalWrite(13, LOW);
  Serial.println("Turned off!");
}
}
}
