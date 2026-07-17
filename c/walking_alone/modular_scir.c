#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
//variaveis

float volts, rt, r1, r2, r3, i, v1, v2, v3, prova_real 

void exec(){
    
}

void dados(){
    print("Voltagem do circuito:");
    scanf("%f", &volts)
    printf("Primeiro resistor: ");
    scanf("%f", &r1);
    printf("Segundo resistor: ");
    scanf("%f", &r2);
    printf("Terceiro resistor: ");
    scanf("%f", &r3);
}

//execuçao
int main(){
    exec();
    return 0;
}