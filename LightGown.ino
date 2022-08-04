/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/
int row1 = A5;
int row3 = A4;
int row4 = A3;
int row5 = A2;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(row1, OUTPUT);
  pinMode(row3, OUTPUT);
  pinMode(row4, OUTPUT);
  pinMode(row5, OUTPUT);
}

// the loop function runs over and over again forever
void loop() 
{
  digitalWrite(row4, LOW);
  delay(500);       
  digitalWrite(row5, LOW);
  delay(200);
  digitalWrite(row1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000); // wait for a second
  digitalWrite(row3, HIGH);
  delay(1000);
  digitalWrite(row4, HIGH);
  digitalWrite(row1, LOW);
  delay(1000);
  digitalWrite(row5, HIGH);
  digitalWrite(row3, LOW);           
  delay(1000);
  digitalWrite(row4, LOW);
  delay(250);       
  digitalWrite(row5, LOW);
  delay(200);
  digitalWrite(row1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500); // wait for a second
  digitalWrite(row3, HIGH);
  delay(500);
  digitalWrite(row4, HIGH);
  digitalWrite(row1, LOW);
  delay(500);
  digitalWrite(row5, HIGH);
  digitalWrite(row3, LOW);           
  delay(500);
  digitalWrite(row4, LOW);
  delay(250);       
  digitalWrite(row5, LOW);
  delay(100);
  digitalWrite(row1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(250); // wait for a second
  digitalWrite(row3, HIGH);
  delay(250);
  digitalWrite(row4, HIGH);
  digitalWrite(row1, LOW);
  delay(250);
  digitalWrite(row5, HIGH);
  digitalWrite(row3, LOW);           
  delay(500);
   
}
