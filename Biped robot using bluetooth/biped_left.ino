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

void loop(){
  leftStep();
}
