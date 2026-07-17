#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x = 450;
	float f = 250.12345;
	char s[] = "Boson Treinamentos";

	printf("Precisão em inteiros:\n ");
	printf("%d\n", x);
	printf("%.5d\n", x);
	printf("%.12d\n", x);
	printf("\n\n Precisão em ponto-flutuante: \n");
	printf("%f\n", f);
	printf("%.2f\n", f);
	printf("\n\n Precisão em literais: \n");
	printf("%s\n", s);
	printf("%.5s\n", s);
	printf("%.18s\n", s);
	return 0;
}

//bruuh
