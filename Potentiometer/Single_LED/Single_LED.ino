int ledPin  = 11;
int redPin = 3;
int yelPin = 10;

int anaPin = 0;
int incr = 5;
int cnt = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  /*int val = analogRead(anaPin);
  int fin = map(val,0,1023,0,255)+20;
  Serial.println(val);
  Serial.println(fin);
  Serial.println("------------------");
  */
  if(cnt >=255)
  {
    cnt = 255;
     incr = -1*incr;
  }
  if(cnt < 0)
  {
      cnt =0;
      incr = -1*incr;
  }
  //if(cnt%2 == 0)
  analogWrite(ledPin,cnt/5);
  analogWrite(yelPin,cnt);
  analogWrite(redPin,255-cnt);
  delay(200);
  digitalWrite(yelPin,LOW);
  digitalWrite(redPin,LOW);
  digitalWrite(ledPin,LOW);
  //delay(10);
  cnt+=incr;
}
