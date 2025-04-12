#include <NewPing.h> 

#define TRIGGER_PIN 12
#define ECHO_PIN 11
#define MAX_DISTANCE 300

const int led = 10;
const int zumbador = 9;
int Distancia;
int a;
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);

void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(zumbador,OUTPUT);
}

void loop() {
  a:;
  delay(500);

  int sensor = sonar.ping_median();
  int centimetros;

  Serial.print("Distancia: ");

  Serial.print(centimetros);
  Serial.print("cm");

  if((sensor / centimetros > 150) && (sensor / centimetros < 200)){
    digitalWrite(led,HIGH);
    digitalWrite(zumbador,HIGH);
    delay(1000);
    digitalWrite(led,LOW); 
    digitalWrite(zumbador,LOW);
    
  }else{
    if((sensor / centimetros > 100) && (sensor / centimetros < 150)){
    digitalWrite(led,HIGH);
    digitalWrite(zumbador,HIGH);
    delay(500);
    digitalWrite(led,LOW); 
    digitalWrite(zumbador,LOW);
    
    }else{
      if((sensor / centimetros > 50) && (sensor / centimetros < 100)){
    digitalWrite(led,HIGH);
    digitalWrite(zumbador,HIGH);
    delay(250);
    digitalWrite(led,LOW); 
    digitalWrite(zumbador,LOW);
    
      }else{
        if((sensor / centimetros > 30) && (sensor / centimetros < 50)){
    digitalWrite(led,HIGH);
    digitalWrite(zumbador,HIGH);
    delay(150);
    digitalWrite(led,LOW); 
    digitalWrite(zumbador,LOW);
    
      }else{
        if((sensor / centimetros > 10) && (sensor / centimetros < 30)){
          digitalWrite(led,HIGH);
          digitalWrite(zumbador,HIGH);
          delay(100);
          digitalWrite(led,LOW); 
          digitalWrite(zumbador,LOW);
      
        }else{
          if(sensor / centimetros < 10){
              digitalWrite(led,LOW); 
              digitalWrite(zumbador,LOW);
              goto a; 
          }
        }
      }
      }
    }
  }
}


