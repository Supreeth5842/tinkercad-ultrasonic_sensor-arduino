// LED BLINKING Using Arduino UNO and Ultrasonic Sensor

int trigger_pin = ?;
int echo_pin = ?;
int led_pin = ?; 
int time;
int distance; 
void setup() 
{
        Serial.begin (9600); 
        pinMode (trigger_pin, OUTPUT); 
        pinMode (echo_pin, INPUT);
        pinMode (led_pin, OUTPUT);
}
void loop() 
{
    digitalWrite (trigger_pin, HIGH);
    delayMicroseconds (10);
    digitalWrite (trigger_pin, LOW);
    time = pulseIn (echo_pin, HIGH);
    distance = (time * 0.034) / 2;

  if (distance <= 10) 
        {
        Serial.println (" LED ON ");
        Serial.print (" Distance= ");              
        Serial.println (distance);        
        digitalWrite (led_pin, HIGH);
        delay (100);
        }
  else {
        Serial.println (" LED OFF ");
        Serial.print (" Distance= ");              
        Serial.println (distance);        
        digitalWrite (led_pin, LOW);
        delay (500);        
       } 
}
