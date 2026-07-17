#include <stdio.h>
#include <stdlib.h>

void main() //funcao, nao precisa de ;
{
	int num1, num2, soma; // criaçao das variaveis
	printf("Digite o primeiro número: \n");
	scanf("%d", &num1); //lendo os valores dados pelo usuario
	printf("Digite o segundo número: \n");
	scanf("%d", &num2);
	soma = num1 + num2; //atribuiçao
	printf("Soma: %d\n", soma); //exibiçao dos resultados
}