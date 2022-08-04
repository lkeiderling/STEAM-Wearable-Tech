/******************************************************************************

LilyPad Light Sensor


******************************************************************************/
// The dark variable determines when we turn the LEDs on or off. 
// Set higher or lower to adjust sensitivity.
//const int darkLevel = 30;

// Create a variable to hold the readings from the light sensor.
int lightValue;

// Set which pin the Signal output from the light sensor is connected to
int sensorPin = A2;

// Set which pin the LED is connected to. 
// Set to 5 if you'd rather hook up your own LED to the LilyPad Arduino.
int UrsaMinorLED = A9;
int BootesLED = A7;
int LibraLED = A5;
int UrsaMajorLED = A8;
int HerculesLED = A4;


void setup()
{
    // Set sensorPin as an INPUT
    pinMode(sensorPin, INPUT);

    // Set LED as outputs
    pinMode(LibraLED, OUTPUT);
    pinMode(UrsaMinorLED, OUTPUT);
    pinMode(UrsaMajorLED, OUTPUT);
    pinMode(BootesLED, OUTPUT);
    pinMode(HerculesLED, OUTPUT);
    

    // Initialize Serial, set the baud rate to 9600 bps.
    Serial.begin(9600);
}

void loop()
{
    // Read the light sensor's value and store in 'lightValue'
    lightValue = analogRead(sensorPin);

    // Print some descriptive text and then the value from the sensor
    Serial.print("Light value is:");
    Serial.println(lightValue);

        
    if (lightValue > 90)
    {
        digitalWrite(LibraLED, LOW);
        digitalWrite(UrsaMinorLED, LOW);
        digitalWrite(UrsaMajorLED, LOW);
        digitalWrite(BootesLED, LOW);
        digitalWrite(HerculesLED, LOW);
    }

    if (lightValue <= 90 && lightValue > 70)
    {
        digitalWrite(LibraLED, LOW); // Turn on LED
        digitalWrite(UrsaMinorLED, HIGH);
        digitalWrite(UrsaMajorLED, LOW);
        digitalWrite(BootesLED, LOW);
        digitalWrite(HerculesLED, LOW);
    }

    if (lightValue <= 70 && lightValue > 45)
    {
        digitalWrite(LibraLED, LOW); // Turn on LED
        digitalWrite(UrsaMinorLED, HIGH);
        digitalWrite(UrsaMajorLED, HIGH);
        digitalWrite(BootesLED, LOW);
        digitalWrite(HerculesLED, LOW);    
    }    
    if (lightValue <= 45 && lightValue > 22)
    {// 
        digitalWrite(LibraLED, LOW); // Turn on LED
        digitalWrite(UrsaMinorLED, HIGH);
        digitalWrite(UrsaMajorLED, HIGH);
        digitalWrite(BootesLED, HIGH);
        digitalWrite(HerculesLED, LOW);    
    }
    if (lightValue <= 22 && lightValue > 10)
    {
        digitalWrite(LibraLED, LOW); // Turn on LED
        digitalWrite(UrsaMinorLED, HIGH);
        digitalWrite(UrsaMajorLED, HIGH);
        digitalWrite(BootesLED, HIGH);
        digitalWrite(HerculesLED, HIGH);    
    }
    if (lightValue <= 10)
    { 
        digitalWrite(LibraLED, HIGH);
        digitalWrite(UrsaMinorLED, HIGH);
        digitalWrite(UrsaMajorLED, HIGH);
        digitalWrite(BootesLED, HIGH);
        digitalWrite(HerculesLED, HIGH);    
    }
    

    // Delay so that the text doesn't scroll to fast on the Serial Monitor. 
    // Adjust to a larger number for a slower scroll.
    delay(100);
}
