#define PIN_LED 7

unsigned int count, toggle;

void setup()
{
    pinMode(PIN_LED, OUTPUT);
    Serial.begin(115200); //Initialize serial port
    count = toggle = 0;
    digitalWrite(PIN_LED, toggle);  //Turn off LED
    delay(1000);
}
void loop(){
    while(1) {
        Serial.println(++count);
        toggle = !toggle;
        digitalWrite(PIN_LED, toggle);
        delay(200);
        if(count == 10)
        {
            break;
        }
    }
    digitalWrite(PIN_LED, 1);
    exit(0);
}
