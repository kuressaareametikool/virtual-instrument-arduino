// control LED in pin digital pin 2 from arduino
int yellowPin = 2;

void setup() {
  pinMode(yellowPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    int state = Serial.read();

    Serial.print(state);
    
    if (state == 53) {
      digitalWrite(yellowPin, HIGH);
      Serial.println("LED ON");
    }
    if (state == 54 ) {
      digitalWrite(yellowPin, LOW);
      Serial.println("LED OFF");
    }
  }
  delay(50);
}
