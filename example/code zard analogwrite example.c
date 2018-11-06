#include <stdio.h>
#include <stdlib.h>
#include "zard.h"

int main() {

//***** NUMBER OF LOOP *****//

int ziteration=10;

//***** DECLARATION *****//

int led = 9;           // the PWM pin the LED is attached to
int brightness = 0;    // how bright the LED is
int fadeAmount = 5;    // how many points to fade the LED by

//***** CLOSE DECLARATION *****//

//***** SETUP *****//

pinMode(led, OUTPUT);

//***** CLOSE SETUP *****//

selang();
ziteration--;
for(int ii=0;ii<=ziteration;ii++){
    printf("Begin iteration = %d \n\n", ii+1);

//***** LOOP *****//


  // set the brightness of pin 9:
  analogWrite(led, brightness);

  // change the brightness for next time through the loop:
  brightness = brightness + fadeAmount;

  // reverse the direction of the fading at the ends of the fade:
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }
  // wait for 30 milliseconds to see the dimming effect
  delay(30);


//***** CLOSE LOOP *****//
selang();
  }
}
