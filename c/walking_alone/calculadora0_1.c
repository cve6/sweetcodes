#include <stdio.h>
#include <stdlib.h>

//calculadora v0.1

void main()
{
	int num1, num2, somar, subtrair, multiplicar, dividir;
	printf("Primeiro número: ");
	scanf("%d", &num1);
	printf("Segundo número: ");
	scanf("%d", &num2);
	somar = num1 + num2;
	subtrair = num1 - num2;
	multiplicar = num1 * num2;
	dividir = num1 / num2;
	printf("=== Resultados ===\n\n");
	printf("Soma: %d\n", somar);
	printf("Subtração: %d\n", subtrair);
	printf("Multiplicação: %d\n", multiplicar);
	printf("Divisão: %d\n", dividir);
}
