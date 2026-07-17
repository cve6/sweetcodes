#include <stdio.h>
#include <stdlib.h>

//tentando fica mais profissa

//prototipos (avisando q as funçao existe)
void exec();
void valores(float *a, float *b);
float somar(float a, float b);
float subtrair(float a, float b);
float multiplicar(float a, float b);
float dividir(float a, float b);
void saida(float a, float b);


//funçao principal
int main()
{
    exec();
    return 0;
}

//execuçao do baguio
void exec()
{
    float num1, num2; //crio as variaveis
    valores(&num1, &num2); //leio as variaveis
    saida(num1, num2); //imprimo as variaveis
}

void valores(float *a, float *b)
{
    puts("Digite o primeiro número: ");
    scanf("%f", a);
    puts("Digite o segundo número: ");
    scanf("%f", b);
}


//operaçoes
float somar(float a, float b)
{ 
    return a + b; 
}
float subtrair(float a, float b)
{ 
    return a - b; 
}
float multiplicar(float a, float b)
{ 
    return a * b; 
}
float dividir(float a, float b)
{ 
    return a / b; 
}
//fim das operaçoes


//saida das operações
void saida(float a, float b)
{
    printf("Somando: %.4f\n", somar(a, b));
    printf("Subtraindo: %.4f\n", subtrair(a, b));
    printf("Multiplicando: %.4f\n", multiplicar(a, b));
    printf("Dividindo: %.4f\n", dividir(a, b));
}   