void setup()
{
  pinMode(A0,INPUT);
  pinMode(2,OUTPUT);
  Serial.begin(9600);
} 


void loop()
{
  int LDR = analogRead(A0);
  Serial.print ("A0(GIRIS)=");
  Serial.println (LDR);
  if (LDR<150) 
  {
    digitalWrite(2,1);
  }
  else 
  {
    digitalWrite(2,0);
  } 
}
