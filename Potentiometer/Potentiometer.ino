int cnt;

int pontiPin = 1;
int grnPin = 11;
int whitPin = 6;
int redPin = 10;
int yelPin = 9;

void setup() {
  // initialize the LED pin as an output:
  pinMode(whitPin, OUTPUT);
  pinMode(redPin,OUTPUT);
  pinMode(grnPin,OUTPUT);
  pinMode(yelPin,OUTPUT);
  //Serial.begin(9600);
  cnt = 0;
}

void loop(){
 
 //Get the value from the potentimeter 
 int val = analogRead(pontiPin);

// Serial.println(val);
 
 //translate the value 
 int fin = map(val,0,1024,0,255);
 //Serial.println(fin);
 //Serial.println("-------------------");
 //val = 200;

 fin  = 127;
 analogWrite(redPin, fin);
 delay(val);
 analogWrite(grnPin, fin);
 delay(val);
 analogWrite(yelPin, fin);
 delay(val);
 analogWrite(whitPin, fin-40);
 //digitalWrite(7,HIGH);
 
 delay(val+200); 
 
 digitalWrite(whitPin,LOW);
 delay(val);
 digitalWrite(yelPin,LOW);
 delay(val);
 digitalWrite(grnPin,LOW);
 delay(val);
 digitalWrite(redPin,LOW);

 delay(val+200);
// cnt+=100;
}
