const int ldrPin = A0; 
const int ledPin = 13; 

int ldrValue = 0; 
int brightness = 0; 

void setup () { 
    Serial.begin(9600); 
    pinMode(ldrPin, INPUT); 
    pinMode(ledPin, OUTPUT); 
} 

void loop () { 
    ldrValue = analogRead(ldrPin); 
    brightness = map (ldrValue, 50, 300, 255, 0); 
    brightness = constrain (brightness, 0, 5000); 
    analogWrite(ledPin, brightness); 
    delay (10); 
}