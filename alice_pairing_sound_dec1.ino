#include "settings.h"

int piezoPin = 3;

void setup() {
  Serial.begin(9600);      // initialize serial communication
  //parcer(ssid);
  parcer(pass);
}

void loop() {
  // put your main code here, to run repeatedly:

}

void  parcer(char* ascii_to_sound) {
  unsigned int  strLength = strlen(ascii_to_sound);

  //Извлекаем посимвольно все элементы из входной char переменной ascii_to_soundascii_to_sound
  for (int a = 0; a < strLength; a++ ) { //Цикл по всем символам в ascii_to_soundascii_to_sound[]
    sound(String(ascii_to_sound[a], HEX)[0]);//Левый символ HEX кода каждого символа из строки
    sound(String(ascii_to_sound[a], HEX)[1]);//Правый символ HEX кода каждого символа из строки
  }
}

void sound(char index) {

  if (index == '0') {
    tone(piezoPin, 1000, 40);
    delay(40);
  }

  if (index == '1') {
    tone(piezoPin, 1240, 40);
    delay(40);
  }

  if (index == '2') {
    tone(piezoPin, 1480, 40);
    delay(40);
  }

  if (index == '3') {
    tone(piezoPin, 1720, 40);
    delay(40);
  }

  if (index == '4') {
    tone(piezoPin, 2200, 40);
    delay(40);
  }

  if (index == '5') {
    tone(piezoPin, 2440, 40);
    delay(40);
  }

  if (index == '6') {
    tone(piezoPin, 2680, 40);
    delay(40);
  }

  if (index == '7') {
    tone(piezoPin, 2920, 40);
    delay(40);
  }

  if (index ==  '8') {
    tone(piezoPin, 3160, 40);
    delay(40);
  }

  if (index == '9') {
    tone(piezoPin, 3400, 40);
    delay(40);
  }

  if (index == 'A') {
    tone(piezoPin, 3640, 40);
    delay(40);
  }

  if (index == 'B') {
    tone(piezoPin, 3880, 40);
    delay(40);
  }

  if (index == 'C') {
    tone(piezoPin, 4120, 40);
    delay(40);
  }

  if (index == 'D') {
    tone(piezoPin, 4360, 40);
    delay(40);
  }

  if (index == 'E') {
    tone(piezoPin, 4600, 40);
    delay(40);
  }

  if (index == 'F') {
    tone(piezoPin, 4840, 40);
    delay(40);
  }

}
