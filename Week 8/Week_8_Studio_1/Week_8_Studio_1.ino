// Give names to the pins of Arduino to be used and 
// define their values as integer 
int Ena = 7;  // IO port 7 will be connected to Pin 9 (Enable) of L293D
int Mot1 = 5; // IO port 5 will be connected to Pin 15 of L293D
int Mot2 = 6;   // IO port 6 will be connected to Pin 10 of L293D
int tp;   // Define a variable for period of PWM
int tON;  // Define a variable for ON time
int tOFF; // Define a variable for OFF time

// Following section will be run once at the beginning. 
void setup()
{
  pinMode(Ena, OUTPUT); // OUTPUT from Arduino
  pinMode(Mot1, OUTPUT);  // OUTPUT from Arduino
  pinMode(Mot2, OUTPUT);  // OUTPUT from Arduino
  digitalWrite(Ena, HIGH);  //Enable pin is set to logic HIGH
  digitalWrite(Mot1, LOW);  // Both control pins are initialized  
  digitalWrite(Mot2, LOW);  // to LOW so motor won't spin for now
  tp = 100;   // Period is 500 microseconds; must be >= tON
  tON = 50;  // ON for 300 microseconds
  tOFF = tp-tON;  // OFF for remaining time of the period 
}

// Following section toggles pin 15 of L293D between ON and OFF states 
// according to the duty cycle.  It will continue looping indefinitely.
void loop() 
{
  for (int i = 0; i < 20000; i++){
    digitalWrite(Mot1, HIGH); //port 5 (pin 15 of L293) is set to HIGH
    delayMicroseconds(tON);   //wait for tON microseconds
    digitalWrite(Mot1, LOW);  //port 5 is set to LOW
    delayMicroseconds(tOFF);  //wait for tOFF microseconds
  }
  for (int i = 0; i < 20000; i++){
    digitalWrite(Mot1, HIGH); //port 5 (pin 15 of L293) is set to HIGH
    delayMicroseconds(tON);   //wait for tON microseconds
    digitalWrite(Mot1, LOW);  //port 5 is set to LOW
    delayMicroseconds(tOFF);  //wait for tOFF microseconds
  }
  for (int i = 0; i < 20000; i++){
    digitalWrite(Mot1, HIGH); //port 5 (pin 15 of L293) is set to HIGH
    delayMicroseconds(tON);   //wait for tON microseconds
    digitalWrite(Mot1, LOW);  //port 5 is set to LOW
    delayMicroseconds(tOFF);  //wait for tOFF microseconds
  }
  for (int i = 0; i < 20000; i++){
    digitalWrite(Mot2, HIGH); //port 5 (pin 15 of L293) is set to HIGH
    delayMicroseconds(tON);   //wait for tON microseconds
    digitalWrite(Mot2, LOW);  //port 5 is set to LOW
    delayMicroseconds(tOFF);  //wait for tOFF microseconds
  }

}
