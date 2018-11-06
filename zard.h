#define NAMA "zaibo"
#define OUTPUT 1
#define INPUT 2

int pinMode(int pin, int kondisi){

    char* strkondisi;
    if (kondisi==1){strkondisi="OUTPUT";}
    if (kondisi==2){strkondisi="INPUT";}

    printf("PIN NOMBOR %d IS SET TO %s\n", pin, strkondisi);
}


int digitalWrite(int pin, char* kondisi){

    printf("pin nombor %d => %s\n", pin, kondisi);
}

int analogWrite(int pin, float kondisi){

    printf("pin nombor %d => %f\n", pin, kondisi);
}


int delay(int delay){

    printf("delay => %d\n", delay);
}

void selang(){printf("\n\n");}
