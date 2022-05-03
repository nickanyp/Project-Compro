# Project-Compro
# Poster
# ที่มาของโครงงาน
  ในปัจจุบันอินเทอร์เน็ตเข้ามามีบทบาทในชีวิตประจำวันของเรา และคนส่วนใหญ่มีอินเทอร์เน็ตอยู่แล้ว ทางคณะผู้จัดทำจึงได้นำความรู้เกี่ยวกับการต่อบอร์ด 
Arduino มาสร้างเป็นการทอยลูกเต๋าออนไลน์ เพราะ ลูกเต๋าเป็นสิ่งที่มีขนาดเล็กอาจทำให้เกิดการสูญหายได้เป็นการสิ้นเปลืองเงินและทรัพยากรหากต้องซื้อใหม่
# ประโยชน์
- สามารถนำไปประยุกต์ใช้ตามชีวิตประจำวันได้จริง และสามารถนำไปประยุกต์ใช้งานให้เกิดประโยชน์ในอนาคตได้
- สามารถทอยลูกเต๋าได้โดยที่ไม่จำเป็นทอยลูกเต๋า เพื่อไม่ให้เกิดการเปลืองทรัพยากร
- ได้ฝึกการเขียนโปรแกรมด้วยภาษาC
- สามารถนำการต่อบอร์ด Arduino มาประยุกต์ใช้ได้
# จุดประสงค์
- เพื่อให้ได้รับความสะดวกและรวดเร็วในการทอยลูกเต๋ามากยิ่งขึ้น
- เพื่อให้ได้ใช้เป็นสื่อในการเรียนการสอนในด้านต่างๆ
- สามารถสร้างวงจรจำลองการทอยลูกเต๋า
# อุปกรณ์
# หลักการทำงาน
# SourceCode
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

# Member
1.      นายนันทนนท์ จินขุนทอง 64070057
2.      นางสาวอนัญพร จอมคำ 64070114
3.      นางสาวกรกมล วิชชุธีระกุล 64070121
4.      นางสาวตรียา เอื้อเจริญศรี 64070151
&emsp;รายงานนี้ป็นส่วนหนึ่งของวิชา Computer Programming สาขาวิชาเทคโนโลยีสารสนเทศ ภาคเรียนที่ 2 ปีการศึกษา 2564
คณะเทคโนโลยีสารสนเทศ สถาบันเทคโนโลยีพระจอมเกล้าเจ้าคุณทหารลาดกระบัง
