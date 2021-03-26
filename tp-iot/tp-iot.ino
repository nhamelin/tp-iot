int lumiere = 0;
int Led = 9;
String stringLumiere = "";

void setup() {
  pinMode(Led, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  if (Serial.available()) {
    delay(10);
    while (Serial.available() > 0) {
      lumiere = analogRead(A0);
      Serial.println(lumiere);
      
      stringLumiere = String(lumiere);
      Serial.print(stringLumiere);
        
      // Led
      digitalWrite(Led, HIGH);
      delay(200);
      digitalWrite(Led, LOW);
      
      delay(300);
    }
    Serial.flush();
  }
  
}
