void setup() {
  // put your setup code here, to run once:
pinMode(12, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
for (int i = 0; i < 5; i++)
{
  digitalWrite(12, HIGH);
  delay(50);
  digitalWrite(12,LOW);
  delay(50);
  }

for (int i = 0; i < 5; i++)
{
  digitalWrite(12, HIGH);
  delay(100);
  digitalWrite(12,LOW);
  delay(100);
  }  
}
