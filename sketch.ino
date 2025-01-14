#include "stdlib.h"
#include "stdio.h"
#include "time.h"


const int lamp_1 = 2; // лампочка
const int lamp_2 = 3;
const int lamp_3 = 4;
const int lamp_4 = 5;
const int lamp_5 = 6;
const int lamp_6 = 7;
int analogPin_1 = A0; // фоторезистор
int analogPin_2 = A1;
int analogPin_3 = A2;
int analogPin_4 = A3;
int analogPin_5 = A4;
int analogPin_6 = A5;
long randNumber; // рандом
int myInts[10]; // массив

void setup() {
  Serial.begin(9600);
  pinMode(lamp_1 , OUTPUT);
  pinMode(lamp_2 , OUTPUT);
  pinMode(lamp_3 , OUTPUT);
  pinMode(lamp_4 , OUTPUT);
  pinMode(lamp_5 , OUTPUT);
  pinMode(lamp_6 , OUTPUT);   
}

void loop() {
  for (int i = 1; i <= 10; i++){
    // подсветка светодиода
    for(int j = 1; j <= i; j++){
      srand(time(0));
      randNumber = random(7);
      myInts[i] = randNumber;
      switch (myInts[j]){
      case 1:digitalWrite(lamp_1,HIGH);
      delay(2000);
      digitalWrite(lamp_1,LOW);
      delay(100);
      break;
      case 2:digitalWrite(lamp_2,HIGH);
      delay(2000);
      digitalWrite(lamp_2,LOW);
      delay(100);
      break;
      case 3:digitalWrite(lamp_3,HIGH);
      delay(2000);
      digitalWrite(lamp_3,LOW);
      delay(100);
      break;
      case 4:digitalWrite(lamp_4,HIGH);
      delay(2000);
      digitalWrite(lamp_4,LOW);
      delay(100);
      break;
      case 5: digitalWrite(lamp_5,HIGH);
      delay(2000);
      digitalWrite(lamp_5,LOW);
      delay(100);
      break;
      case 6:digitalWrite(lamp_6,HIGH);
      delay(2000);
      digitalWrite(lamp_6,LOW);
      delay(100);
      break;
    }
    }
    // проверка на выбор фотоэлемента
    for(int j = 1; j <= i; j++){
      switch (myInts[j]){
      case 1: while(analogRead(analogPin_1) > 600){
        delay(1000);
      }
      digitalWrite(lamp_1,HIGH);
      delay(3000);
      digitalWrite(lamp_1,LOW);
      break;
      case 2: while(analogRead(analogPin_2) > 600){
        delay(1000);
      }
      digitalWrite(lamp_2,HIGH);
      delay(3000);
      digitalWrite(lamp_2,LOW);
      break;
      case 3: while(analogRead(analogPin_3) > 600){
        delay(1000);
      }
      digitalWrite(lamp_3,HIGH);
      delay(3000);
      digitalWrite(lamp_3,LOW);
      break;
      {case 4: while(analogRead(analogPin_4) > 600){
        delay(1000);
      }
      digitalWrite(lamp_4,HIGH);
      delay(3000);
      digitalWrite(lamp_4,LOW);
      break;}
      case 5: while(analogRead(analogPin_5) > 600){
        delay(1000);
      }
      digitalWrite(lamp_5,HIGH);
      delay(3000);
      digitalWrite(lamp_5,LOW);
      break;
      case 6: while(analogRead(analogPin_6) > 600){
        delay(1000);
      }
      digitalWrite(lamp_6,HIGH);
      delay(3000);
      digitalWrite(lamp_6,LOW);
      break;
    }
   delay(1000); // задержка после каждого цикла
    } 
  }

}
