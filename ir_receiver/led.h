int LED_PIN = 13;
int default_delay_value = 1000;

boolean IS_LED_ON;

void turn_on(){
	digitalWrite(LED_PIN, HIGH);
	IS_LED_ON = true;
}

void turn_off(){
	digitalWrite(LED_PIN, LOW);
	IS_LED_ON = false;
}

void blink_slow(){
	digitalWrite(LED_PIN, HIGH);
  	delay(default_delay_value);
  	digitalWrite(LED_PIN, LOW);
  	delay(default_delay_value); 
}

void blink_fast(){

	int delay_value = default_delay_value / 10;

	digitalWrite(LED_PIN, HIGH);
  	delay(delay_value);
  	digitalWrite(LED_PIN, LOW);
  	delay(delay_value); 
}