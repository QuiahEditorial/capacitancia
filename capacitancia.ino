// !!! Medir un capacitor sin una resistencia en serie puede destruir tu Arduino !!!

// Por Roberto A. Zavala
// Breve : https://es.overleaf.com/read/yqvkmtqjbjzj
// Libro : https://www.amazon.com.mx/dp/B074TTGLL2
// 🙏🏼    : DNv7acPAeVBhTXbKv26itJecPG1SPy2o4F

// !!! Medir un capacitor sin una resistencia en serie puede destruir tu Arduino !!!

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
