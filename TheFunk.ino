/*
D2 = T
D3 = H
D4 = E
D5 = L
D6 = A
D7 = B


 */

int ledPins[] = {2,8,4,5,6,7};
int pinCount = 6;
int T = ledPins[0];
int H = ledPins[1];
int E = ledPins[2];
int L = ledPins[3];
int A = ledPins[4];
int B = ledPins[5];

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize all the pins.
  for (int thisPin = 0; thisPin < pinCount; thisPin++) {
    pinMode(ledPins[thisPin], OUTPUT);
  }

}

// the loop function runs over and over again forever
void loop() {
  
  routine1();
  delay(1000);
  routine2();
  delay(1000);
  routine3();
  delay(5000);
}

void routine1() {
  digitalWrite(T, HIGH);
  delay(600);
  digitalWrite(H, HIGH);
  delay(600);
  digitalWrite(E, HIGH);
  delay(600);
  digitalWrite(L, HIGH);
  delay(600);
  digitalWrite(A, HIGH);
  delay(600);
  digitalWrite(B, HIGH);
  delay(600);
}

void routine2() {
  flickerPin(T, 600);
  flickerPin(H, 800);
  flickerPin(E, 600);
  flickerPin(L, 400);
  flickerPin(A, 900);
  flickerPin(B, 600);
}

void routine3() {
   //Turn all the lights on.
  for (int thisPin = 0; thisPin < pinCount; thisPin++) {
    digitalWrite(ledPins[thisPin], HIGH);
  }
  delay(1000);
  //Turn all the lights off.
  for (int thisPin = 0; thisPin < pinCount; thisPin++) {
    digitalWrite(ledPins[thisPin], LOW);
  }
  delay(1000);
     //Turn all the lights on.
  for (int thisPin = 0; thisPin < pinCount; thisPin++) {
    digitalWrite(ledPins[thisPin], HIGH);
  }
  delay(1000);
  //Turn all the lights off.
  for (int thisPin = 0; thisPin < pinCount; thisPin++) {
    digitalWrite(ledPins[thisPin], LOW);
  }
  delay(1000);
  //Turn all the lights on.
  for (int thisPin = 0; thisPin < pinCount; thisPin++) {
    digitalWrite(ledPins[thisPin], HIGH);
  }
  delay(1000);
    //Turn all the lights off.
  for (int thisPin = 0; thisPin < pinCount; thisPin++) {
    digitalWrite(ledPins[thisPin], LOW);
  }
  delay(1000);
     //Turn all the lights on.
  for (int thisPin = 0; thisPin < pinCount; thisPin++) {
    digitalWrite(ledPins[thisPin], HIGH);
  }
  delay(1000);
    //Turn all the lights off.
  for (int thisPin = 0; thisPin < pinCount; thisPin++) {
    digitalWrite(ledPins[thisPin], LOW);
  }
  delay(1000);
     //Turn all the lights on.
  for (int thisPin = 0; thisPin < pinCount; thisPin++) {
    digitalWrite(ledPins[thisPin], HIGH);
  }
  delay(1000);
  
  
}


//flicker a pin. takes a int of pin in ledPins array. and for how long (in millasecons) to flicker.
void flickerPin(int pin, unsigned long howLong) {
  unsigned long finishAt = millis() + howLong;
  
  while(millis() < finishAt) {
    int rand = random(0,255);
    byte brightness = byte(rand);
    analogWrite(ledPins[pin], brightness);
    delay(25);
  }
  digitalWrite(ledPins[pin], HIGH);
}
