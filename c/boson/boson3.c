#include <stdlib.h>
#include <stdio.h>

//saida de dados printf()

int main()
{
	printf("Porcentagem d: %d\n", 603);
	printf("Porcentagem d: %d\n", -603); //%d = especificador de num int
	printf("Porcentagem i: %i\n", 603); //%i = %d
	printf("Porcentagem o: %o\n", 603); //603 convertido para octal
	printf("Porcentagem u: %u\n", -603); //num int sem sinal
	printf("Porcentagem u: %u\n", 603);
	printf("Porcentagem x: %x\n", 603); //valor passado em hexadecimal (b)
	printf("Porcentagem X: %X\n", 603); //valor passado em hexadecimal (B)
	printf("Porcentagem f: %f\n", 6032101.75); //valor de ponto flutuante, 6 digitos de precisao
	printf("Porcentagem e: %e\n", 6032101.75); //valor em notaçao decimal
	printf("Porcentagem e: %e\n", -6032101.75);
	printf("Porcentagem E: %E\n", 6032101.75); // E = e, apenas aparece maiusculo
	printf("Porcentagem s: %s\n", "String de Exemplo"); //string qualquer
	printf("Porcentagem c: %c\n", 'T'); //caracter unico = aspas simples, caracteres = aspas duplas (string)
	return 0;
}