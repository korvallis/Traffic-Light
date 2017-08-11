
const int PIN_RED = 2;
const int PIN_YEL = 3;
const int PIN_GRN = 4;
long lastChange = 0;

int state = -1;

void setup() 
{
  
  pinMode(PIN_RED,OUTPUT);
  pinMode(PIN_YEL,OUTPUT);
  pinMode(PIN_GRN,OUTPUT);
  pinMode(11,INPUT);
  pinMode(12,OUTPUT);
  digitalWrite(6,HIGH);
}

void loop() 
{
      if(digitalRead(5) == HIGH && millis() - lastChange > 250)
      {
        state = state +1;
        state = state %6;
        lastChange = millis();
      }
    
      if(state == 0)
      {
          digitalWrite(PIN_RED, LOW);
          digitalWrite(PIN_YEL, LOW);
          digitalWrite(PIN_GRN, LOW);
      }  
       if(state == 1)
      {
          digitalWrite(PIN_RED, HIGH);
          digitalWrite(PIN_YEL, LOW);
          digitalWrite(PIN_GRN, LOW);
      }
      if(state == 2)
      {
          digitalWrite(PIN_RED, LOW);
          digitalWrite(PIN_YEL, HIGH);
          digitalWrite(PIN_GRN, LOW);
      }
      if(state == 3)
      {
          digitalWrite(PIN_RED, LOW);
          digitalWrite(PIN_YEL, LOW);
          digitalWrite(PIN_GRN, HIGH);
      }
      if(state == 4)
      {
          digitalWrite(PIN_RED, HIGH);
          digitalWrite(PIN_YEL, HIGH);
          digitalWrite(PIN_GRN, HIGH);
      }
      if(state == 5)
      {
          if((( millis() /  900) % 2) == 0)
           digitalWrite(PIN_RED, LOW);
          else
            digitalWrite(PIN_RED, HIGH);

          
          digitalWrite(PIN_YEL, LOW);
          digitalWrite(PIN_GRN, LOW);
      }
      delay(5);
}
