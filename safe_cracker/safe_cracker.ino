int target = 700;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int raw = analogRead(A0);
  int distance= abs(raw - target);
  int frequency = map(distance, 0, 700, 2000, 200);
  tone(8, frequency);
  Serial.print("Raw value is: ");
  Serial.print(raw);
  Serial.print("  Distance is: ");
  Serial.println(distance);
  if(distance<20){
    Serial.println("CRACKED!");
  }
  delay(50);
}
