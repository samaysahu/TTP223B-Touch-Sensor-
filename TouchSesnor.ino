#define ctsPin 8      // Pin for capacitive touch sensor
int relayPin = 9;    // Pin for the relay control

int lastTouchState = LOW;
int relayState = LOW; // LOW means relay OFF if module is "active HIGH"

void setup()
{
  Serial.begin(9600);
  pinMode(relayPin, OUTPUT);
  pinMode(ctsPin, INPUT);
  digitalWrite(relayPin, relayState); // Initialize relay OFF
}

void loop()
{
  int currentTouchState = digitalRead(ctsPin);

  if (currentTouchState == HIGH && lastTouchState == LOW)
  {
    relayState = !relayState;
    digitalWrite(relayPin, relayState);
    Serial.println(relayState ? "RELAY ON" : "RELAY OFF");
    delay(50); // Debounce
  }

  lastTouchState = currentTouchState;
  delay(10);
}
