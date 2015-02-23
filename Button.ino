
const int buttonPin = 7;     // the number of the pushbutton pin
const int yelPin =  5;
const int redPin =  3;
const int grnPin =  8;
int lastState = HIGH;
int state = HIGH;
int count = 0;
int lastPin =0;
///variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(8, OUTPUT);      
   count =0;
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);     
}

void loop(){
  // read the state of the pushbutton value:
  
  buttonState = digitalRead(buttonPin);
  int pin = 0;
  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState == LOW && buttonState != lastState) {     
    // turn LED on
     if(state == LOW)
         state = HIGH;
     else
         state = LOW;
     
     digitalWrite(lastPin,LOW);
     if(count % 3==0)
     {
       pin = grnPin;
     }
     if(count % 3==1)
     {
       pin = redPin;
     }
     if(count % 3==2)
     {
       pin = yelPin;
     }
      count++;   
  } 
  
  lastPin = pin;
   
  digitalWrite(pin,state);
  lastState = buttonState;
 delay(20); 
}
