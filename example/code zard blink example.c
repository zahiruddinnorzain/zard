#include <stdio.h>
#include <stdlib.h>
#include "zard.h"

int main() {

int ziteration=2; //NUMBER OF LOOP

//***** SETUP *****//

  // initialize digital pin LED_BUILTIN as an output.
  zpinMode(13, "OUTPUT");

//***** CLOSE SETUP *****//

printf("\n\n");

for(int ii=0;ii<=ziteration;ii++){
    printf("Begin iteration = %d \n\n", ii+1);

//***** LOOP *****//


  zdigitalWrite(13, "HIGH");   // turn the LED on (HIGH is the voltage level)
  zdelay(1000);                       // wait for a second
  zdigitalWrite(13, "LOW");    // turn the LED off by making the voltage LOW
  zdelay(1000);                       // wait for a second


//***** CLOSE LOOP *****//
printf("\n\n");
  }
}
