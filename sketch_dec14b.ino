int led = 13;
void setup() {
  // put your setup code here, to run once:
  //초기화 작업할 떄 한번만 수행 

  pinMode(led,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  //반복수행
  digitalWrite(led,HIGH); //HIGH = 1
  delay(1000);
  digitalWrite(led,LOW);
  delay(1000);

}
