#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> //pra usar o sleep
// sintaxe de cores: "\033[<código ansi>m"
// programa basico, pode apresentar erros

int main(void)
{
    printf("\033[33m"); //amarelo
    printf("\n=== Circuito Em Paralelo ===\n\n");
    printf("\033[0m");
    float volts, condutancia_total, r1, r2, r3, req, i1, i2, i3, vt_rt_it, corrente_total, potencia_dissipada; //variaveis flutuantes %f
    printf("Volts do circuito: ");
    scanf("%f", &volts);
    printf("Primeiro resistor: ");
    scanf("%f", &r1);
    printf("Segundo resistor: ");
    scanf("%f", &r2);
    printf("Terceiro resistor: ");
    scanf("%f", &r3);
    condutancia_total = 1/r1 + 1/r2 + 1/r3;
    req = 1/condutancia_total;
    printf("\n\nFazendo a inversão...\n");
    sleep(1.5);
    printf("A resistência equivalente do circuito: %.2f Ohms", req);
    i1 = volts/r1;
    i2 = volts/r2;
    i3 = volts/r3;
    printf("\n\nCalculando correntes individuais de cada resistor...\n");
    sleep(1.4);
    printf("i1: %.2fA | i2: %.2fA | i3: %.2fA\n", i1, i2, i3);
    vt_rt_it = volts / req;
    corrente_total = i1 + i2 + i3;
    printf("Aplicando VT = RT.it...\n");
    sleep(1.3);
    printf("A soma entre i1 + i2 + i3: %.2fA\n", corrente_total);
    printf("O total de tudo é: %.2fA\n\n", vt_rt_it);
    potencia_dissipada = volts * vt_rt_it;
    printf("Calculando potência dissipada...\n");
    sleep(1.2);
    printf("Potência dissipada: %.2fW\n\n", potencia_dissipada);
    printf("\033[33m"); //amarelo
    printf("\n=== Circuito Em Paralelo ===\n\n");
    return 0;
}