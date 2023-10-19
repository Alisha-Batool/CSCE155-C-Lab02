#include <stdio.h>
#include <stdlib.h>
int main(int argc, char**argv)
{
    float tempCelcius= atof(argv[1]);
    printf("%f celcius is %f fahreheit \n " , tempCelcius);
    (( tempCelcius * 9/5 ) + 32);
    if(argc>1){
        printf("%f celcius is %f fahreheit \n " , tempCelcius);
    }else{
        printf("error. provide a value of temperature to be converted to CLA \n");
    }
    return 0;
}