
const int PIN_RED = 2;
const int PIN_YEL = 3;
const int PIN_GRN = 4;


int state = -1;

void setup() 
{
  
  pinMode(PIN_RED,OUTPUT);
  pinMode(PIN_YEL,OUTPUT);
  pinMode(PIN_GRN,OUTPUT);
  pinMode(5,INPUT);

  digitalWrite(PIN_RED, HIGH);

}

void loop() 
{
  
      digitalWrite(PIN_RED,digitalRead(5));
      /*
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

    state = (int)  ((millis() / 1000.0));
    state = state % 7;
    
  delay(5);
  */
  delay(10);
}
