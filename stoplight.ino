int green = 4; int yellow = 5; int red = 6;
int pgreen = 9; int pred = 10;
int button = 8;

void setup(){
pinMode(red, OUTPUT); pinMode(yellow, OUTPUT); pinMode(green, OUTPUT);
pinMode(pred, OUTPUT); pinMode(pgreen, OUTPUT); 
digitalWrite(green, HIGH); digitalWrite(pred, HIGH);
}

void loop(){
  if (digitalRead(button) == HIGH) {
     delay(15);
     if (digitalRead(button) == HIGH) {
          changeLights();
          delay(1000);
     }
}
}

void changeLights(){

  digitalWrite(green, LOW);
  digitalWrite(red, LOW);
  digitalWrite(yellow, HIGH);
  delay(2000);

  digitalWrite(green, LOW);
  digitalWrite(red, HIGH);
  digitalWrite(yellow, LOW);
  digitalWrite(pred, LOW);
  digitalWrite(pgreen, HIGH);
  delay(5000);
 
  digitalWrite(green, HIGH);
  digitalWrite(red, LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(pred, HIGH);
  digitalWrite(pgreen, LOW);
  delay(5000); }