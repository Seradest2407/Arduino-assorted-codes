int R = 11; //Pin for red LED
int G = 10; //Pin for green LED
int B = 9;  //Pin for blue LED
int R_RED;
int G_GREEN;
int B_BLUE;
int potred = A0;   // Pin for first potentiometer  
int potgreen = A1; // Pin for second potentiometer 
int potblue = A2;  // Pin for third potentiometer 

void setup()
{
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(potred, INPUT);
  pinMode(potgreen, INPUT);
  pinMode(potblue, INPUT);  
}
void loop()
{
  R_RED = analogRead(potred);
  analogWrite(R, R_RED/4);
  G_GREEN = analogRead(potgreen);
  analogWrite(G, G_GREEN/4);
  B_BLUE = analogRead(potblue);
  analogWrite(B, B_BLUE/4);
}
