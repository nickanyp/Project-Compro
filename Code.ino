void setup()
{
  pinMode(0, INPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13,OUTPUT);
}

void showNumber(int number) {

  if (number == 1)
  {
      digitalWrite(7, HIGH); //A
      digitalWrite(8, LOW); //B
      digitalWrite(9, LOW);//C
      digitalWrite(10, HIGH); //D
      digitalWrite(11, HIGH); //E
      digitalWrite(12, HIGH); //F
      digitalWrite(13, HIGH); //G
  }
  if (number == 2)
  {
      digitalWrite(7, LOW); //A
      digitalWrite(8, LOW); //B
      digitalWrite(9, HIGH);//C
      digitalWrite(10,LOW); //D
      digitalWrite(11, LOW); //E
      digitalWrite(12, HIGH); //F
      digitalWrite(13, LOW); //G
  }
  if (number == 3)
  {
      digitalWrite(7, LOW); //A
      digitalWrite(8, LOW); //B
      digitalWrite(9, LOW);//C
      digitalWrite(10, LOW); //D
      digitalWrite(11, HIGH); //E
      digitalWrite(12, HIGH); //F
      digitalWrite(13, LOW); //G
  }
  if (number == 4)
  {
      digitalWrite(7, HIGH); //A
      digitalWrite(8, LOW); //B
      digitalWrite(9, LOW);//C
      digitalWrite(10, HIGH); //D
      digitalWrite(11, HIGH); //E
      digitalWrite(12, LOW); //F
      digitalWrite(13, LOW); //G
  }
  if (number == 5)
  {
     digitalWrite(7, LOW); //A
      digitalWrite(8, HIGH); //B
      digitalWrite(9, LOW);//C
      digitalWrite(10, LOW); //D
      digitalWrite(11, HIGH); //E
      digitalWrite(12, LOW); //F
      digitalWrite(13, LOW); //G
  }
  if (number == 6)
  {
      digitalWrite(7, LOW); //A
      digitalWrite(8, HIGH); //B
      digitalWrite(9, LOW);//C
      digitalWrite(10, LOW); //D
      digitalWrite(11, LOW); //E
      digitalWrite(12, LOW); //F
      digitalWrite(13, LOW); //G
  }
    digitalWrite(1, HIGH);
  if (number >= 2) {
    digitalWrite(2, HIGH);
  }
  if (number >= 3) {
    digitalWrite(3, HIGH);    
  }
  if (number >= 4) {
    digitalWrite(4, HIGH);    
  }
  if (number >= 5) {
    digitalWrite(5, HIGH);    
  }
  if (number == 6) {
    digitalWrite(6, HIGH);    
  }
}

void buildUpTension() {
  // left to right
  for (int i=1;i<=6;i++) {
    if (i!=1){
      digitalWrite(i-1, LOW);
    }
    digitalWrite(i, HIGH);
    delay(100);
  }
  // right to left
  for (int i=6;i>=1;i--) {
    if (i!=6) {
      digitalWrite(i+1, LOW);
    }
    digitalWrite(i, HIGH);
    delay(100);
  }
}

int throwDice() {
  int randNumber = random(1,7);
  
  #ifdef DEBUG
    Serial.println(randNumber);
  #endif
  
  return randNumber;
}

void setAllLEDs(int value) {
  for (int i=1; i<=6; i++) {
    digitalWrite(i, value);
  }
}

void loop() {
  
  if (digitalRead(0) == LOW) {
    // remove previous number
    setAllLEDs(LOW);
    
    buildUpTension();
    int thrownNumber = throwDice();
    showNumber(thrownNumber);
  }
  else {
    
  }
}
