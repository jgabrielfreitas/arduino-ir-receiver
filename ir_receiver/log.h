void init_log(){
    Serial.begin(9600);
}

void log(const char* message) {
    Serial.print(message); 
}