#include<Servo.h>
//#define Relay 13
#define ServoNeck 2
#define ServoTail 1
#define ServoFoot 3
//#define JoystickForward 4
//#define JoystickForward2 7
//#define JoystickRight 5
//#define JoystickLeft 6
//#define NeckPlusPosition 60
//#define NeckMainusPosition 0
//#define TailPlusPosition 60
//#define TailMainusPosition 0
//#define FootPlusPosition 60
//#define FootMainusPosition 0
//#define NeutralPosition 30
//#define Delay 500

Servo neck,foot;
//int ForwardSwitch;
//int RightSwitch;
//int LeftSwitch;

void setup(){
  Serial.begin(9600);
//  pinMode(JoystickForward,INPUT);
//  pinMode(JoystickRight,INPUT);
//  pinMode(JoystickLeft,INPUT);
//  pinMode(Relay,OUTPUT);
  neck.attach(ServoNeck,900,2100);
  foot.attach(ServoFoot,900,2100);
  neck.write(0);
  foot.write(0);
  delay(18); 
}

void loop(){
//  neck.write(0);
//  foot.write(0);

//  
//  ForwardSwitch = digitalRead(JoystickForward);
//  RightSwitch = digitalRead(JoystickRight);
//  LeftSwitch = digitalRead(JoystickLeft);
  Serial.print("ok");
  delay(300);
  
//    
//  digitalWrite(Relay,HIGH);
//  delay(3000);
//  digitalWrite(Relay,LOW);
//  delay(3000);
  
}
