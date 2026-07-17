// ===== exercicio do anselmo 01 =====
//Entrar com 3 valores
//Saida 3 valores multiplicados entre si e divididos por 100

#include <stdio.h>
/* meu programa:
int main(){
    signed int val1, val2, val3, mult, div;
    printf("Insira um valor: ");
    scanf("%d", &val1);
    printf("Insira outro valor: ");
    scanf("%d", &val2);
    printf("Insira o último valor: ");
    scanf("%d", &val3);
    mult = val1 * val2 * val3;
    printf("O resultado da multiplicação entre esses valores é: %d\n", mult);
    div = mult / 100;
    printf("A divisão do resultado por 100 é: %d\n", div);
}
*/

//puts = mesma coisa do printf
//Use printf quando precisar exibir variáveis ou formatar a saída.
//Use puts quando quiser apenas imprimir uma string fixa de forma rápida.
//programa do anselmo abaixo

void executar();
void entradaDeValor();
float calcular();
void saidaDeValor(float resultado);

int val1, val2;
float val3;

int main(){
    executar();
    return 0;
}

void executar()
{
    entradaDeValor();
    saidaDeValor(calcular());
}
void entradaDeValor()
{
    puts("Entre com valores: ");
    scanf("%d %d %f", &val1, &val2, &val3);
}
float calcular()
{
    return (val1 * val2 * val3) / 100;
}
void saidaDeValor(float resultado)
{
    printf("O resultado é %f\n", resultado);
}
