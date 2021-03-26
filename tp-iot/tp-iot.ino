int lumiere = 0;
int Led = 9;
String stringLumiere = "";

void setup() {
  pinMode(Led, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  lumiere = analogRead(A0);
  Serial.println(lumiere);
      
  stringLumiere = String(lumiere);

  if (Serial.available()) {
    delay(10);
    while (Serial.available() > 0) {
        Serial.print(stringLumiere);
    }
    Serial.flush();
  }
        
  // Led
  digitalWrite(Led, HIGH);
  delay(200);
  digitalWrite(Led, LOW);
  
  delay(300);
  
}
