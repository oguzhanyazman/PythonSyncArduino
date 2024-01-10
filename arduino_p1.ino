#include "Keyboard.h"


void setup() {
  Serial.begin(9600);

}

void loop() {
  if (Serial.available()>0) {
    char command[2];
    Serial.readBytes(command, 2);


    if (strcmp(command, "sa") == 0) {
      delay(1000);
      Keyboard.print("as kanka naber!");
    }
    if (strcmp(command, "aa") == 0) {
      delay(1000);
      Keyboard.write('A');
    }


  }
}
