const int led1 = 2;
const int led2 = 3;
const int led3 = 4;
const int led4 = 5;
const int led5 = 6;
const int led6 = 7;
const int led7 = 8;
const int led8 = 9;
const int led9 = 10;
const int led10 = 11;
const int bot=12;

const int pot = 0;

int var1 = 0;
int var2 = 0;

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
  pinMode(led10, OUTPUT);
  
  Serial.begin(9600);
}

void loop()
{
  var1 = analogRead(pot);
  var2 =digitalRead(bot);
  Serial.println(var);
  
  if(var2){
  if(var>100){
    digitalWrite(led1, HIGH);
  }else{
    digitalWrite(led1, LOW);
}
  
   if(var1>200){
    digitalWrite(led2, HIGH);
  }else{
    digitalWrite(led2, LOW);
}
  
  if(var1>300){
    digitalWrite(led3, HIGH);
  }else{
    digitalWrite(led3, LOW);
}
  
  if(var1>400){
    digitalWrite(led4, HIGH);
  }else{
    digitalWrite(led4, LOW);
}
  
  if(var1>500){
    digitalWrite(led5, HIGH);
  }else{
    digitalWrite(led5, LOW);
}
   if(var1>600){
    digitalWrite(led6, HIGH);
  }else{
    digitalWrite(led6, LOW);
}
   if(var1>700){
    digitalWrite(led7, HIGH);
  }else{
    digitalWrite(led7, LOW);
}
   if(var1>800){
    digitalWrite(led8, HIGH);
  }else{
    digitalWrite(led8, LOW);
}
   if(var1>900){
    digitalWrite(led9, HIGH);
  }else{
    digitalWrite(led9, LOW);
}
   if(var1>1000){
    digitalWrite(led10, HIGH);
  }else{
    digitalWrite(led10, LOW);
}
  }
  delay(200);
}
  
