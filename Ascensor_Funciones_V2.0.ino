int floor1 = 8;
int floor1_1 = 7;
int floor1_2 = 6;
int floor2 = 5;
int floor2_1 = 4;
int floor2_2 = 3;
int floor3 = 2;

int button1 = 11;
int button2 = 10;
int button3 = 9;

int currentstate1 = 0;
int currentstate2 = 0;
int currentstate3 = 0;

void setup() {
  pinMode(floor1, OUTPUT);
  pinMode(floor1_1, OUTPUT);
  pinMode(floor1_2, OUTPUT);
  pinMode(floor2, OUTPUT);
  pinMode(floor2_1, OUTPUT);
  pinMode(floor2_2, OUTPUT);
  pinMode(floor3, OUTPUT);

  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(button3, INPUT);
  digitalWrite(floor1, HIGH);
}

void loop() {
  currentstate1 = digitalRead(button1);
  currentstate2 = digitalRead(button2);
  currentstate3 = digitalRead(button3);
  if (currentstate1 == 1)
  {
    tofirstfloor();
  }
  if (currentstate2 == 1)
  {
    tosecondfloor();
  }
  if (currentstate3 == 1)
  {
    tothirdfloor();
  }


}


void tofirstfloor() {
  if (digitalRead(floor1) == HIGH)
  {
    digitalWrite(floor1, LOW);
    delay(500);
    digitalWrite(floor1, HIGH);
  }
  else {
    if (digitalRead(floor2) == HIGH)
    {
      delay(3000);
      digitalWrite(floor2, LOW);
      digitalWrite(floor1_2, HIGH);
      delay(500);
      digitalWrite(floor1_2, LOW);
      digitalWrite(floor1_1, HIGH);
      delay(500);
      digitalWrite(floor1_1, LOW);
      digitalWrite(floor1, HIGH);
    }
    else {
      if (digitalRead(floor3) == HIGH);
      {
        delay(3000);
        digitalWrite(floor3, LOW);
        digitalWrite(floor2_2, HIGH);
        delay(500);
        digitalWrite(floor2_2, LOW);
        digitalWrite(floor2_1, HIGH);
        delay(500);
        digitalWrite(floor2_1, LOW);
        digitalWrite(floor2, HIGH);
        delay(500);
        digitalWrite(floor2, LOW);
        digitalWrite(floor1_2, HIGH);
        delay(500);
        digitalWrite(floor1_2, LOW);
        digitalWrite(floor1_1, HIGH);
        delay(500);
        digitalWrite(floor1_1, LOW);
        digitalWrite(floor1, HIGH);
      }
    }
  }
}
void tosecondfloor() {
  if (digitalRead(floor2) == HIGH)
  {
    digitalWrite(floor2, LOW);
    delay(500);
    digitalWrite(floor2, HIGH);
  }
  else {
    if (digitalRead(floor1) == HIGH)
    {
      delay(3000);
      digitalWrite(floor1, LOW);
      digitalWrite(floor1_1, HIGH);
      delay(500);
      digitalWrite(floor1_1, LOW);
      digitalWrite(floor1_2, HIGH);
      delay(500);
      digitalWrite(floor1_2, LOW);
      digitalWrite(floor2, HIGH);
    }
    else {
      if (digitalRead(floor3) == HIGH);
      {
        delay(3000);
        digitalWrite(floor3, LOW);
        digitalWrite(floor2_2, HIGH);
        delay(500);
        digitalWrite(floor2_2, LOW);
        digitalWrite(floor2_1, HIGH);
        delay(500);
        digitalWrite(floor2_1, LOW);
        digitalWrite(floor2, HIGH);
      }
    }
  }
}

void tothirdfloor() {
  if (digitalRead(floor3) == HIGH)
  {
    digitalWrite(floor3, LOW);
    delay(500);
    digitalWrite(floor3, HIGH);
  }
  else {
    if (digitalRead(floor2) == HIGH)
    {
      delay(3000);
      digitalWrite(floor2, LOW);
      digitalWrite(floor2_1, HIGH);
      delay(500);
      digitalWrite(floor2_1, LOW);
      digitalWrite(floor2_2, HIGH);
      delay(500);
      digitalWrite(floor2_2, LOW);
      digitalWrite(floor3, HIGH);
    }
    else {
      if (digitalRead(floor1) == HIGH);
      {
        delay(3000);
        digitalWrite(floor1, LOW);
        digitalWrite(floor1_1, HIGH);
        delay(500);
        digitalWrite(floor1_1, LOW);
        digitalWrite(floor1_2, HIGH);
        delay(500);
        digitalWrite(floor1_2, LOW);
        digitalWrite(floor2, HIGH);
        delay(500);
        digitalWrite(floor2, LOW);
        digitalWrite(floor2_1, HIGH);
        delay(500);
        digitalWrite(floor2_1, LOW);
        digitalWrite(floor2_2, HIGH);
        delay(500);
        digitalWrite(floor2_2, LOW);
        digitalWrite(floor3, HIGH);
      }
    }
  }
}
