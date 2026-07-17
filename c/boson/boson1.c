#include <stdio.h>
#include <stdlib.h>

int main() //nao entendi a diferença de int main() pra void main()
{
	printf("\n");
	printf("=== INTEIROS ===\n");
	printf("Tamanho de armazenamento para o tipo int: %d\n", sizeof(int));
	printf("Tamanho de armazenamento para o tipo short: %d\n", sizeof(short));
	printf("Tamanho de armazenamento para o tipo long: %d\n", sizeof(long));
	//ate aq sao valores inteiros, abaixo valores flutuantes
	printf("\n");
	printf("=== FLUTUANTES ===\n");
	printf("Tamanho de armazenamento para o tipo float: %d\n", sizeof(float));
	printf("Tamanho de armazenamento para o tipo double: %d\n", sizeof(double));
	printf("Tamanho de armazenamento para o tipo long double: %d\n", sizeof(long double));
	return 0;
}

//nessa mesma aula tem mais conteudos interessantes pra revisar
//https://www.youtube.com/watch?v=Q1nb0JEFuI8&list=PLucm8g_ezqNqzH7SM0XNjsp25AP0MN82R&index=3
//so q nao sei transformar o conteudo q ele passou em codigo, nao ainda