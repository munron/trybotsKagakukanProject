#include<Servo.h>

#define Relay 13
#define ServoNeck 2
#define ServoTail 1
#define ServoFoot 3
#define JoystickForward 4
#define JoystickForward2 7
#define JoystickRight 5
#define JoystickLeft 6
#define NeckPlusPosition 60
#define NeckMainusPosition 0
#define TailPlusPosition 60
#define TailMainusPosition 0
#define FootPlusPosition 60
#define FootMainusPosition 0
#define NeutralPosition 30
#define Delay 500

int count;

Servo neck,foot;
int forward;
int right;
int left;

void setup(){
  Serial.begin(115200);
  pinMode(JoystickForward, INPUT);
  pinMode(JoystickRight, INPUT);
  pinMode(JoystickLeft, INPUT);
  pinMode(Relay, OUTPUT);
  neck.attach(ServoNeck,900,2100);
  foot.attach(ServoFoot,900,2100); 
  neck.write(0);
  foot.write(0);
  count = 0;
}

void loop(){
  forward = digitalRead(JoystickForward);
  right = digitalRead(JoystickRight);
  left = digitalRead(JoystickLeft);
  if (count > 100) {
    count = 0;
    if (forward) {
      digitalWrite(Relay, HIGH);
    } else {
      digitalWrite(Relay, LOW);
    }
  
    if (right){
      neck.write(80);
      foot.write(-80);
    }
    if(left){
      neck.write(-80);
      foot.write(80);
    }
  } else {
  count++;
  }
}
