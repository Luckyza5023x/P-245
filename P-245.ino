#define POTENTIOMETER_PIN  15

void setup() {
  Serial.begin(9600);

  pinMode(POTENTIOMETER_PIN, INPUT);
  pinMode(buzzer_gpio, OUTPUT);
}

void loop() {
  int analogValue = analogRead(POTENTIOMETER_PIN);
  int brightness = map(analogValue, 0, 4095, 0, 255);
  if (brightness > 200) {
    Serial.println("decrease the volume ");
    digitalWrite(buzzer_gpio, HIGH);
    delay(100);
  }
  digitalWrite(buzzer_gpio, LOW);
  Serial.println(brightness);
  delay(30);
}
