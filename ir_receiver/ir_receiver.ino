#include <IRremote.h>
#include "led.h"

int IRpin = 11;
IRrecv irrecv(IRpin);
decode_results results;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
}

void loop() {
  if (irrecv.decode(&results)) {
    Serial.println(results.value, DEC); // Print the Serial 'results.value'
    irrecv.resume();   // Receive the next value
    blink_fast();
  }
}
