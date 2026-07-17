#include <stdio.h>
#include <stdlib.h>

int main(void)
{	
	int x = 450;
	float f = 250.12345;
	char s[] = "Boson Treinamentos";
	printf("Precisão em inteiros: \n");
	printf("%10.5d\n", x);
	printf("%15.12d\n", x);
	printf("\n\nPrecisão em ponto flutuante: \n");
	printf("%8.2f", f);
	printf("\n\nPrecisão em strings:\n");
	printf("%10.5s\n", s);
	return 0;
}