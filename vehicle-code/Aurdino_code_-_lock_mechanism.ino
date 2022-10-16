#include <Servo.h>
Servo myservo1;
Servo myservo2;
Servo myservo3;

int x;
void setup() {
 Serial.begin(115200);
 Serial.setTimeout(1);
 myservo1.attach(10);
 myservo2.attach(9);
 myservo3.attach(6);
 myservo1.write(0);
 myservo2.write(0);
 myservo3.write(0);
}
void loop() {
 while (!Serial.available());
 x = Serial.readString().toInt();
 if (x==-1){
  Serial.print("Not Available");} else{Serial.print(x);
   }; 
 if( x==1||x==2){
  myservo1.write(90);
  delay(3000);
  myservo1.write(0);
  delay(1000);
  };
 if( x==3||x==4){
  myservo2.write(90);
  delay(3000);
  myservo2.write(0);
  delay(1000);
  }; 
 if( x==5||x==6){
  myservo3.write(90);
  delay(3000);
  myservo3.write(0);
  delay(1000);
  };


  
}
