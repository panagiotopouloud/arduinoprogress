const int greenone = 2;
const int blueone = 3;
const int redone = 4;
const int greentwo = 5;
const int bluetwo = 6;
const int redtwo = 7;
const int greenthree = 8;
const int bluethree = 9;
const int redthree = 10;

void setup() {
  pinMode(greenone, OUTPUT);
  pinMode(blueone, OUTPUT);
  pinMode(redone, OUTPUT);
  pinMode(greentwo, OUTPUT);
  pinMode(bluetwo, OUTPUT);
  pinMode(redtwo, OUTPUT);
  pinMode(greenthree, OUTPUT);
  pinMode(bluethree, OUTPUT);
  pinMode(redthree, OUTPUT);
}

void loop() {

  digitalWrite(greenone, HIGH);
  delay(200);
  digitalWrite(greenone, LOW);
  delay(200);
  digitalWrite(blueone, HIGH);
  delay(200);
  digitalWrite(blueone, LOW);
  delay(200);
  digitalWrite(redone, HIGH);
  delay(200);
  digitalWrite(redone, LOW);
  delay(200);
  digitalWrite(greentwo, HIGH);
  delay(200);
  digitalWrite(greentwo, LOW);
  delay(200);
  digitalWrite(bluetwo, HIGH);
  delay(200);
  digitalWrite(bluetwo, LOW);
  delay(200);
  digitalWrite(redtwo, HIGH);
  delay(200);
  digitalWrite(redtwo, LOW);
  delay(200);
  digitalWrite(greenthree, HIGH);
  delay(200);
  digitalWrite(greenthree, LOW);
  delay(200);
  digitalWrite(bluethree, HIGH);
  delay(200);
  digitalWrite(bluethree, LOW);
  delay(200);
  digitalWrite(redthree, HIGH);
  delay(200);
  digitalWrite(redthree, LOW);
  delay(300);


  digitalWrite(greenone, HIGH);
  digitalWrite(greentwo, HIGH);
  digitalWrite(greenthree, HIGH);
  delay(230);
  digitalWrite(greenone, LOW);
  digitalWrite(greentwo, LOW);
  digitalWrite(greenthree, LOW);
  delay(230);
  digitalWrite(blueone, HIGH);
  digitalWrite(bluetwo, HIGH);
  digitalWrite(bluethree, HIGH);
  delay(230);
  digitalWrite(blueone, LOW);
  digitalWrite(bluetwo, LOW);
  digitalWrite(bluethree, LOW);
  delay(230);
  digitalWrite(redone, HIGH);
  digitalWrite(redtwo, HIGH);
  digitalWrite(redthree, HIGH);
  delay(230);
  digitalWrite(redone, LOW);
  digitalWrite(redtwo, LOW);
  digitalWrite(redthree, LOW);
  delay(230);
  
 }
