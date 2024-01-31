const int motionSensorPin = 4;
const int ledPin = 13;

void setup() {
  Serial.begin(9600);
  pinMode(motionSensorPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int motionValue = digitalRead(motionSensorPin);
  Serial.print("Motion Sensor Value: ");
  Serial.println(motionValue);

  if (motionValue == HIGH) {
    digitalWrite(ledPin, HIGH);
    Serial.println("LED ON");
  } else {
    digitalWrite(ledPin, LOW);
    Serial.println("LED OFF");
  }

  delay(500);
}
