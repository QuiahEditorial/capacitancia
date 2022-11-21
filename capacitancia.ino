
float F = 2;
float t;
float V;

void setup() 
{
  Serial.begin(9600);
  pinMode(F, OUTPUT);
  t = 0;
}

void loop()
{
analogWrite(F,255);
delay(5000);
digitalWrite(F,LOW);
do{
   V = analogRead(A0);
   Serial.println(V);
  }while(V>0);
}
