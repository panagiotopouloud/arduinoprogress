const int buttonPin = 2;
const int ledPin =  13;

 
int buttonState = 0; 

void setup() {
 
  pinMode(ledPin, OUTPUT);
 
  pinMode(buttonPin, INPUT);
}

void loop() {
 
  buttonState = digitalRead(buttonPin);

 
  if (buttonState == HIGH) {
 
    digitalWrite(ledPin, HIGH);
    delay(15000);
  } elif:
      (buttonState == LOW); {
        
    digitalWrite(ledPin, LOW);
  }
}
