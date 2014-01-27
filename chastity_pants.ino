/*
 DIGF 2B03
 Connor Campbell - 2389765
 LAB 2
 When pants are undone an LED turns on 
 Base code is Button example, by DojoDave <http://www.0j0.org> (modified 30 Aug 2011 by Tom Igoe)
 http://www.arduino.cc/en/Tutorial/Button
 */

// constants won't change. They're used here to 
// set pin numbers:
const int buttonPin = 2;     // the number of the pushbutton pin
const int ledPin =  13;      // the number of the LED pin

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);      
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);     
}

void loop(){
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState == HIGH) {     
    // turn LED on:    
    digitalWrite(ledPin, LOW);  
  } 
  else {
    // turn LED off:
    digitalWrite(ledPin, HIGH); 
  }
}
