#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> //pra usar o sleep()
// sintaxe de cores: "\033[<código ansi>m"
// ainda estou aprendendo C
// programa basico, pode apresentar erros

int main(void)
{
    printf("\033[33m"); //amarelo
    printf("\n === Circuito Em Série === \n\n");
    printf("\033[0m"); //resetando a cor
    float volts, rt, r1, r2, r3, i, v1, v2, v3, prova_real; //variaveis
    printf("Volts do circuito: ");
    scanf("%f", &volts);
    printf("Valor primeiro resistor: ");
    scanf("%f", &r1);
    printf("Valor segundo resistor: ");
    scanf("%f", &r2);
    printf("Valor terceiro resistor: ");
    scanf("%f", &r3);
    printf("\n\nUtilizando RT = R1 + R2 + R3...\n");
    sleep(1.2);
    rt = r1 + r2 + r3;
    printf("A resistência equivalente do circuito: %.2f Ohmns\n", rt);
    i = volts/rt;
    printf("\n\nUtilizando V = R.i...\n");
    sleep(1.3);
    printf("A corrente total do circuito: %.2fA\n", i);
    v1 = r1 * i;
    printf("v1: %.2f | ", v1);
    v2 = r2 * i;
    printf("v2: %.2f | ", v2);
    v3 = r3 * i;
    printf("v3: %.2f", v3);
    prova_real = v1 + v2 + v3;
    printf("\n\nProva real; somando v1, v2 e v3...\n");
    sleep(1);
    printf("Resultado: %.2fV\n\n", prova_real);
    return 0;
}
