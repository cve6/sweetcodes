#include <stdio.h>

//C puro = nao existe variavel do tipo string

int main(){
    int i;
    char str[100]; //pode da entrada em ate 100 caracteres, se mais que 100, ele corta << isso é um array
    // o char possui 2 bytes * ele me reserva 100 desses 2 bytes, ou seja, 2*100 = 200 bytes

    printf("Entre com 2 valores (Seu nome e sua idade): ");
    scanf("%s %d", &str, &i); // %s = strings, %d = inteiros
    printf("Olá %s, é bom saber que você tem %d anos.\n", str, i);

    i = i + 10;
    i += 10; //mesma coisa q o primeiro

    printf("Daqui 10 anos você terá %d\n", i);

}