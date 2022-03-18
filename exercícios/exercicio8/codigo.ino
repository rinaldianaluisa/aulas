// C++ code
//
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
const int botao1 = 12;
const int botao2 = 13;
const int botao3 = 14;

int var1;
int var2;
int var3;

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(botao1, INPUT);
  
  pinMode(led2, OUTPUT);
  pinMode(botao2, INPUT);
  
  pinMode(led2, OUTPUT);
  pinMode(botao3, INPUT);
  
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
  
  pinMode(led10, OUTPUT);
}

void loop()
{
  var1 =digitalRead(botao1);
  var2 =digitalRead(botao2);
  var3 =digitalRead(botao3);
  
  if(var1){
    funcao1();
    desligar();
  }
  
  if(var2){
    funcao2);
    desligar();
  }
  
  if(var3){
    funcao3);
    desligar();
    
  }
}

void funcao1(){
  digitalWrite(led1, HIGH);
  delay(2000); 
  digitalWrite(led2, HIGH);
  delay(2000); 
  digitalWrite(led3, HIGH);
  delay(2000); 
  digitalWrite(led4, HIGH);
  delay(2000); 
  }
void funcao2(){
  digitalWrite(led5, HIGH);
  delay(2000); 
  digitalWrite(led6, HIGH);
  delay(2000); 
}
void funcao3(){
  digitalWrite(led7, HIGH);
  delay(2000); 
  digitalWrite(led8, HIGH);
  delay(2000);
  digitalWrite(led9 HIGH);
  delay(2000);
  digitalWrite(led10HIGH);
  delay(2000);
}
void desligar(){
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  digitalWrite(led10, LOW);
}
