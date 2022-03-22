const int MY_LED = D7;


// The setup() method is called once when the device boots.
void setup()
{
	// In order to set a pin, you must tell Device OS that the pin is
	// an OUTPUT pin. This is often done from setup() since you only need
	// to do it once.
	pinMode(MY_LED, OUTPUT);
}

// The loop() method is called frequently.
void loop()
{
    
    // __    HIGH FOR 5s 2s
    // .     HIGH FOR 1s 500
    // Break between signals for the same letter - 1s 500
    // Break in between letters - LOW FOR 8s 4s
    
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
