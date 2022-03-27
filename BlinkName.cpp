const int MY_LED = D7; // Variable for In-built LED D7


// The setup() method is called once when the device boots.
void setup()
{
	
	// Set D7 as an output Pin 
	pinMode(MY_LED, OUTPUT);
}

// The loop() method is called frequently.
void loop()
{
    
    // __ (Long Blink )   HIGH FOR 2s 
    // .  (Short Blink )  HIGH FOR 500
    // Break between signals for the same letter - 500
    // Break in between letters - LOW FOR 4s
    
    // M _ _
    digitalWrite(MY_LED, HIGH);
    delay(2s);
    digitalWrite(MY_LED, LOW);
    delay(500);
    digitalWrite(MY_LED, HIGH);
    delay(2s);
    
    // BREAK
    digitalWrite(MY_LED, LOW);
    delay(4s);
    
    // E .
    digitalWrite(MY_LED, HIGH);
    delay(500);
    
    // BREAK
    digitalWrite(MY_LED, LOW);
    delay(4s);
    
    // G _ _ .
    digitalWrite(MY_LED, HIGH);
    delay(2s);
    digitalWrite(MY_LED, LOW);
    delay(500);
    digitalWrite(MY_LED, HIGH);
    delay(2s);
    digitalWrite(MY_LED, LOW);
    delay(500);
    digitalWrite(MY_LED, HIGH);
    delay(500);
    
    // BREAK
    digitalWrite(MY_LED, LOW);
    delay(4s);
    
    // A . _
    digitalWrite(MY_LED, HIGH);
    delay(500);
    digitalWrite(MY_LED, LOW);
    delay(500);
    digitalWrite(MY_LED, HIGH);
    delay(2s);
    
    // BREAK
    digitalWrite(MY_LED, LOW);
    delay(4s);
    
    // N _ .
    digitalWrite(MY_LED, HIGH);
    delay(2s);    
    digitalWrite(MY_LED, LOW);
    delay(500);
    digitalWrite(MY_LED, HIGH);
    delay(500);
    
    // BREAK
    digitalWrite(MY_LED, LOW);
    delay(4s);
   
}
