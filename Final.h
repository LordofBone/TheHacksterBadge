//setup
int i;
int ledNos[] = {8, 5, 6, 7, 3, 2, 11, 4, 16, 15, 12, 17, 14, 10, 13};
void setup() {
   for (i = 0; i < 18; i++) {
    pinMode(i, OUTPUT);
   }
}

//main loop to go through the patterns
void loop() {
  pattern1();
  pattern2();
  delay(500);
  flash(10);
  allOn();
  delay(2000);
  pattern2();
}

//pattern 1 illuminates the leds one at a time
void pattern1() {
    for (i = 0; i < 15; i++) {
    digitalWrite(ledNos[i], HIGH);
    delay(50);
  }
}

//pattern 2 turns the leds off one at a time
void pattern2() {
    for (i = 14; i >= 0; i--) {
    digitalWrite(ledNos[i], LOW);
    delay(50);
  }
}

//this turns all of the leds on
void allOn() {
    digitalWrite(ledNos[0], HIGH);
    digitalWrite(ledNos[1], HIGH);
    digitalWrite(ledNos[2], HIGH);
    digitalWrite(ledNos[3], HIGH);
    digitalWrite(ledNos[4], HIGH);
    digitalWrite(ledNos[5], HIGH);
    digitalWrite(ledNos[6], HIGH);
    digitalWrite(ledNos[7], HIGH);
    digitalWrite(ledNos[8], HIGH);
    digitalWrite(ledNos[9], HIGH);
    digitalWrite(ledNos[10], HIGH);
    digitalWrite(ledNos[11], HIGH);
    digitalWrite(ledNos[12], HIGH);
    digitalWrite(ledNos[13], HIGH);
    digitalWrite(ledNos[14], HIGH);
}

//this turns all of the leds off
void allOff() {
    digitalWrite(ledNos[0], LOW);
    digitalWrite(ledNos[1], LOW);
    digitalWrite(ledNos[2], LOW);
    digitalWrite(ledNos[3], LOW);
    digitalWrite(ledNos[4], LOW);
    digitalWrite(ledNos[5], LOW);
    digitalWrite(ledNos[6], LOW);
    digitalWrite(ledNos[7], LOW);
    digitalWrite(ledNos[8], LOW);
    digitalWrite(ledNos[9], LOW);
    digitalWrite(ledNos[10], LOW);
    digitalWrite(ledNos[11], LOW);
    digitalWrite(ledNos[12], LOW);
    digitalWrite(ledNos[13], LOW);
    digitalWrite(ledNos[14], LOW);
}

//this flashes the leds on/off a set number of times
void flash(int f) {
  for (int i = 0; i <= f; i++) {
    allOn();
    delay(100);
    allOff();
    delay(100);
  }
}
