#include <Arduino.h>

int lampu = 26;
int lampu2 = 33;
int lampu3 = 27;
 
void setup() {
    Serial.begin(115200);
    Serial.println("ESP32 Blinking LED");
    
    pinMode(lampu, OUTPUT);
    pinMode(lampu2, OUTPUT);
    pinMode(lampu3, OUTPUT);
}

void loop() {
    digitalWrite(lampu, HIGH);
    digitalWrite(lampu2, LOW);
    digitalWrite(lampu3, LOW);
    Serial.println("LAMPU HIJAU");
    delay(1000); 

    digitalWrite(lampu, LOW);
    digitalWrite(lampu2, LOW);
    digitalWrite(lampu3, HIGH);
    Serial.println("LAMPU KUNING");
    delay(1000);

    digitalWrite(lampu, LOW);
    digitalWrite(lampu2, HIGH);
    digitalWrite(lampu3, LOW);
    Serial.println("LAMPU MERAH");
    delay(1000);
}