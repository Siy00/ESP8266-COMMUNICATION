#define LED_PIN 4

void setup() {
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);

  Serial.begin(9600);
}

void loop() {

  if (Serial.available()) {

    char i = Serial.read();

    if (i == '1') {
      digitalWrite(LED_PIN, HIGH);
    }

    if (i == '0') {
      digitalWrite(LED_PIN, LOW);
    }
  }
}