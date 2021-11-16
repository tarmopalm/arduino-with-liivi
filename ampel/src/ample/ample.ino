/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int ledRo = 13;
int ledGe = 12;
int ledGu = 11;
int z = 1;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(ledRo, OUTPUT);
  pinMode(ledGe, OUTPUT);
  pinMode(ledGu, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  switch (z)
  {
    case 1:
      digitalWrite(ledRo, HIGH);
      digitalWrite(ledGe, LOW);
      digitalWrite(ledGu, LOW);
      break;
    case 2:
      digitalWrite(ledRo, LOW);
      digitalWrite(ledGe, HIGH);
      digitalWrite(ledGu, LOW);
      break;
    case 3:
      digitalWrite(ledRo, LOW);
      digitalWrite(ledGe, LOW);
      digitalWrite(ledGu, HIGH);
      break;
    case 4:
      digitalWrite(ledRo, LOW);
      digitalWrite(ledGe, HIGH);
      digitalWrite(ledGu, LOW);
      break;
      
    //default:
    
  }
  
  z = z + 1;
  if (z == 5)
  {
    z = 1;
  }
  delay(1000);               // wait for a second

  
  
}


