int led = 9;
void setup() 
{
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);//9번핀이 아웃풋 
 
}

void loop() 
{
  // put your main code here, to run repeatedly:
   digitalWrite(led,HIGH);
   delay(1000);
   digitalWrite(led,LOW);
   delay(2000);
}
