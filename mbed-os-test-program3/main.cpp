#include "mbed.h"

DigitalOut myLED(LED1);
DigitalOut myLED2(LED3);

//void Led(DigitalOut &ledpin);

int main()
{
   myLED = 1;
   myLED2 = 1;
   while (true)
   {        
        for (int i = 0; i < 6; ++i)
        {                     //blink for 10 times
            myLED2 = !myLED2; // toggle led
            ThisThread::sleep_for(500ms);
        }
        for (int i = 0; i < 4; ++i)
        {                     //blink for 10 times
            myLED = !myLED; // toggle led
            ThisThread::sleep_for(500ms);
        }
   }
}