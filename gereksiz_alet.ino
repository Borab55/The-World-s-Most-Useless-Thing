#include <Servo.h>
Servo servo;

long deger,Random;

#define buton 2

void setup() {
  Serial.begin(9600);
  servo.attach(3);
  pinMode(buton,INPUT_PULLUP);
  randomSeed(analogRead(A0));
  servo.write(80);
}
void loop() {
if(digitalRead(buton) == 0){
  deger = random(0,4);
  Serial.println(deger);
  
  if(deger == 0){
    servo.write(25);
    delay(100);
    servo.write(80);
  }

  if(deger == 1){
    servo.write(35);
    Random = random(100,500);
    delay(Random);
    servo.write(80);
    Random = random(100,500);
    delay(Random);
    servo.write(35);
    Random = random(100,500);
    delay(Random);
    servo.write(80);
    Random = random(100,500);
    delay(Random);
    servo.write(25);
    delay(100);
    servo.write(80);
  }

  if(deger == 2){
    Random = random(1000,2500);
    delay(Random);
    servo.write(25);
    delay(100);
    servo.write(80);
  }

  if(deger == 3){
    Random = random(3,30);
    for(int x=80;x>35;x--){
      servo.write(x);
      delay(Random);
    }
    
    Random = random(3,30);
    for(int x=35;x<80;x++){
      servo.write(x);
      delay(Random);
    }
    
    Random = random(3,30);
    for(int x=80;x>20;x--){
      servo.write(x);
      delay(Random);
    }
    servo.write(80);
  }

}
else{
  servo.write(80);
}
delay(150);

}
