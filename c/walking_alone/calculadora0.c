#include <stdio.h>
#include <stdlib.h>

//ate o final disso quero ter desenvolvido uma calculadora pog
//e funcional de preferencia
//calculadora v0

void main()
{
	//adição
	int num1, num2, adicao, subt, mult, divi;
	printf("+Digite o primeiro número: ");
	scanf("%d", &num1);
	printf("+Digite o segundo número: ");
	scanf("%d", &num2);
	adicao = num1 + num2;
	printf("+Resultado: %d\n\n", adicao);

	//subtração
	printf("-Digite o primeiro número: ");
	scanf("%d", &num1);
	printf("-Digite o segundo número: ");
	scanf("%d", &num2);
	subt = num1 - num2;
	printf("-Resultado: %d\n\n", subt);

	//multiplicação
	printf("*Digite o primeiro número: ");
	scanf("%d", &num1);
	printf("*Digite o segundo número: ");
	scanf("%d", &num2);
	mult = num1 * num2;
	printf("*Resultado: %d\n\n", mult);

	//divisão
	printf("/Digite o primeiro número: ");
	scanf("%d", &num1);
	printf("/Digite o segundo número: ");
	scanf("%d", &num2);
	divi = num1 / num2;
	printf("/Resultado: %d\n", divi);
}