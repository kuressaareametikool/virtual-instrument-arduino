// Button is connected to the digital pin 2
const int buttonPin = 2;
// Potentiometer is connected to the analog pin A0
const int potPin = A0;

int buttonState, potVal;

// Setup runs once after arduino boots up
void setup() {
  // Set the data rate in bits per second (baud) for serial data transmission
  Serial.begin(9600);
  
  // For digital pins it's also possible to send data but here we are receiving data from pin. Digital pin has two values - HIGH and LOW
  pinMode(buttonPin, INPUT);
}

// Infinite loop for event listening
void loop() {
  
  buttonState = digitalRead(buttonPin);
  potVal = analogRead(potPin);

  Serial.println("potVal: " + potVal);

  if (buttonState == LOW) {
    Serial.println("button pressed");
  }
  
  delay(100);
}
