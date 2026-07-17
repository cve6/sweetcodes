#include <stdio.h>

/*
short - 2 bytes - 16 bits
int - 4 bytes - 32 bits
long - 8 bytes - 64 bits

2^n = onde >>n<< é o número de bits
ou seja, 2^16 = 65.536, divide por 2 caso NÃO SEJA unsigned (sem sinal), o resultado sendo negativo
assim em diante
2^16 = 65.535 / 2 = -32.7675
resultado = 
número de combinações possíveis
ou quantidade de valores representáveis
ou ainda cardinalidade do conjunto de valores

esse programa aq nao é economico, ele usa int ao inves de short
nao devemos matar moscas com bazucas, portanto, usaremos short
para fazermos a alteraçao, tambem é necessario trocar o %d por %hd
se caso nao feita a alteraçao, o compilador mostrará o porquê e o programa
falhará

int main(){
    int idade;
    printf("Entre com sua idade: ");
    scanf("%d", &idade);
    printf("Sua idade é %d\n", idade);

    return 0;
}

*/

int main(){
    short idade; //long = %ld (desnecessario nesse caso)
    printf("Entre com sua idade: ");
    scanf("%hd", &idade);
    idade += 120
    printf("Sua idade mais 120 é %hd\n", idade);

    return 0;
}