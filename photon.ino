#include "InternetButton/InternetButton.h"


InternetButton b = InternetButton();
bool notified = false;

void setup()
{
    b.begin();

    Particle.function("notify", notify);
}

void loop()
{
    if (b.allButtonsOn()) {
        notified = false;
        b.playNote("G5", 8);
        b.allLedsOn(255, 0, 0);
        delay(500);
        b.allLedsOff();
    } else if (notified == true) {
        for (int led = 1; led < 12; led++) {
            b.ledOff(led - 1);
            b.ledOn(led, 0, 255, 0);
            delay(50);
            b.ledOn(led - 1, 255, 0, 0);
            b.ledOn(led, 0, 255, 0);
            delay(50);
            b.ledOff(led);
        }

        b.playNote("A7", 10);
        b.playNote("G7", 10);
        b.playNote("E7", 10);
        b.playNote("C7", 10);
        b.playNote("D7", 10);
        b.playNote("B7", 10);
        b.playNote("F7", 10);
        b.playNote("C8", 10);
        b.playNote("A7", 10);
        b.playNote("G7", 10);
        b.playNote("E7", 10);
        b.playNote("C7", 10);
        b.playNote("D7", 10);
        b.playNote("B7", 10);
        b.playNote("F7", 10);
        b.playNote("C8", 10);

        b.allLedsOff();
        delay(1500);
   }
}

int notify(String command) {
    Particle.publish("Command '" + command + "' called.", NULL, 60, PRIVATE);
    notified = true;
}

