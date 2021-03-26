int lumiere = 0;
int Led = 9;

void setup() {
  pinMode(Led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // PhotoResistance
  lumiere = analogRead(A0);
  Serial.println(lumiere);
  // Led
  digitalWrite(Led, HIGH);
  delay(200);
  digitalWrite(Led, LOW);

  delay(300);
}
