#include <Servo.h>
Servo leftBottom;
Servo leftTop;
Servo rightTop;
Servo rightBottom;
int counter=1;
char btn;
int state;
String data;

void setup() {
  Serial.begin(9600);
  rightTop.attach(4);
  rightBottom.attach(3);
  leftBottom.attach(5);
  leftTop.attach(6);
  ///////////////////////
  rightTop.write(90);
  leftTop.write(90);
  rightBottom.write(90);
  leftBottom.write(90);
  delay(1000);
}
void loop(){
  btn = Serial.read();
    
    if(btn == '1'){
    state =1;
    Serial.println(state);
    }
    if(btn == '2'){
    state =2;
    Serial.println(state);
    }
    if(btn == '3'){
    state =3;
    Serial.println(state);
    }
    if(btn == '4'){
    state =4;
    Serial.println(state);
    }
    switch(state){
      case 1:
      Serial.println("Moivng Forward..");
      forwardStep();
      break;
      case 2:
      Serial.println("MOving Backwards..");
      backwardStep();
      break;
      case 3:
      Serial.println("Moving Right..");
      rightStep();
      break;
      case 4:
      Serial.println("Moving Left..");
      leftStep();
      break;        
    }
}

void forwardStep(){
  ////Left leg operation
  for(int i=90;i<=115;i++){
    leftBottom.write(i);
    rightBottom.write(i);
    delay(15);
  }
  delay(500);    
  for(int i=90;i>=65;i--){
  leftTop.write(i);
  rightTop.write(i);
  delay(15);
  }   
  delay(500);
  for(int i=115;i>=90;i--){
  leftBottom.write(i);
  rightBottom.write(i);
  delay(15);
  }    
  delay(500);
 //Right leg operation

  for(int i=90;i>=65;i--){
      leftBottom.write(i);
      rightBottom.write(i);
      delay(15);
  }
  delay(500);    
  for(int i=90;i<=120;i++){
    leftTop.write(i);
    rightTop.write(i);
    delay(15);
  }  
  delay(500);
  for(int i=65;i<=90;i++){
    leftBottom.write(i);
    rightBottom.write(i);
    delay(15);
  }    
 delay(500); 
}

////////////////////////////

void backwardStep(){
  for(int i=90;i>=65;i--){
  leftBottom.write(i);
  rightBottom.write(i);
  delay(15);
}
delay(500);
for(int i=90;i>=65;i--){
  leftTop.write(i);
  rightTop.write(i);
  delay(15);
} 
delay(500);
for(int i=65;i<=90;i++){
  leftBottom.write(i);
  rightBottom.write(i);
  delay(15);
}
delay(500);
//Right leg operation 
for(int i=90;i<=115;i++){
  leftBottom.write(i);
  rightBottom.write(i);
  delay(15);
}
delay(500);
for(int i=90;i<=120;i++){
  leftTop.write(i);
  rightTop.write(i);
  delay(15);
} 
delay(500);
for(int i=115;i>=90;i--){
  leftBottom.write(i);
  rightBottom.write(i);
  delay(15);
}
delay(500);
}

////////////////////////

void rightStep(){
  for(int i=90;i>=65;i--){
  leftBottom.write(i);
  rightBottom.write(i);
  delay(15);
}
delay(500);
for(int i=90;i>=60;i--){
  leftTop.write(i);
  //rightTop.write(i);
  delay(15);
} 
delay(500);
for(int i=65;i<=90;i++){
  leftBottom.write(i);
  rightBottom.write(i);
  delay(15);
}
delay(500);
//Right leg operation 
for(int i=90;i<=115;i++){
  leftBottom.write(i);
  rightBottom.write(i);
  delay(15);
}
delay(500);
for(int i=90;i<=120;i++){
  leftTop.write(i);
  rightTop.write(i);
  delay(15);
} 
delay(500);
for(int i=115;i>=90;i--){
  leftBottom.write(i);
  rightBottom.write(i);
  delay(15);
}
delay(500);
}

///////////////////////////////

void leftStep(){
    ////Left leg operation
  for(int i=90;i<=115;i++){
    leftBottom.write(i);
    rightBottom.write(i);
    delay(15);
  }
  delay(500);    
  for(int i=90;i>=65;i--){
    leftTop.write(i);
    //rightTop.write(i);
    delay(15);
  }   
  delay(500);
  for(int i=115;i>=90;i--){
    leftBottom.write(i);
    rightBottom.write(i);
    delay(15);
  }    
  delay(500);
  
  //Right leg operation
  for(int i=90;i>=65;i--){
    leftBottom.write(i);
    rightBottom.write(i);
    delay(15);
  }
  delay(500); 
   for(int i=90;i<=120;i++){
      leftTop.write(i);
      rightTop.write(i);
      delay(15);
    }  
 delay(500); 
}
