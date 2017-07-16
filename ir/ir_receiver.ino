int LED_PIN = 13;
int delay_value = 50;


void setup() {
  // put your setup code here, to run once:
  pinMode(LED_PIN, OUTPUT);
}

void feedback_led(){
  digitalWrite(LED_PIN, HIGH);
  delay(delay_value);
  digitalWrite(LED_PIN, LOW);
  delay(delay_value); 
}

void loop() {
  // put your main code here, to run repeatedly:
}
