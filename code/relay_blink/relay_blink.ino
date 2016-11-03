void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(8, LOW);
  delay(1000);
  digitalWrite(8, HIGH);
  delay(10);
  
  digitalWrite(8, LOW);
  delay(100);
  digitalWrite(8, HIGH);
  delay(100);
  
  for (int i = 0; i<20; i++)
  {
   digitalWrite(8, LOW);
  delay(50);
  digitalWrite(8, HIGH);
  delay(10); 
  }
  
  digitalWrite(8, LOW);
  delay(500);
  digitalWrite(8, HIGH);
  delay(10);
  
  digitalWrite(8, LOW);
  delay(100);
  digitalWrite(8, HIGH);
  delay(10);
  
  for (int i = 0; i<20; i++)
  {
   digitalWrite(8, LOW);
  delay(5);
  digitalWrite(8, HIGH);
  delay(5); 
  }
  
  digitalWrite(8, LOW);
  delay(1000);
  digitalWrite(8, HIGH);
  delay(10);
  
  digitalWrite(8, LOW);
  delay(100);
  digitalWrite(8, HIGH);
  delay(10);
  
  for (int i = 0; i<15; i++)
  {
   digitalWrite(8, LOW);
  delay(85);
  digitalWrite(8, HIGH);
  delay(85); 
  }
  
  for (int i = 0; i<25; i++)
  {
   digitalWrite(8, LOW);
  delay(60);
  digitalWrite(8, HIGH);
  delay(6); 
  }
  
  for (int i = 0; i<22; i++)
  {
   digitalWrite(8, LOW);
  delay(55);
  digitalWrite(8, HIGH);
  delay(55); 
  }

}
