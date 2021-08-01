int led1 = D3;
int led2 = D4;
int led3 = D5;
int ldr = A0;
int x = 0;
void setup() {
  // put your setup code here, to run once:
Serial.begin (115200);
pinMode (led1, OUTPUT);
pinMode (led2, OUTPUT);
pinMode (led3, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
x = analogRead (ldr);
Serial.println (x);
delay (1000);
if (x > 800 ){
  digitalWrite (led1, LOW);
  digitalWrite (led2, LOW);
  digitalWrite (led3, LOW);
  }
else if (x > 700 ){
  digitalWrite (led1, HIGH);
  digitalWrite (led2, LOW);
  digitalWrite (led3, LOW);
}
else if (x >= 501 ){
  digitalWrite (led1, HIGH);
  digitalWrite (led2, HIGH);
  digitalWrite (led3, LOW);  
}
else if (x <=500 ){
  digitalWrite (led1, HIGH);
  digitalWrite (led2, HIGH);
  digitalWrite (led3, HIGH);
}
}
