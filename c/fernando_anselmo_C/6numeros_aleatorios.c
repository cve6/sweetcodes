// programa pro usuario adivinha um numero de 0 a 100
// conforme a tentativa o programa informa se ta "acima ou abaixo" do valor inserido

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void selecionarv();
void obtervalor();
int resultest();

unsigned short selecionadov;
unsigned short vdigitado;


int main(){
    selecionarv();
    return 0;
}

void selecionarv()
{
    srand(time(NULL));
    selecionadov = rand() % 101;
    do{
        obtervalor();
    } while (resultest());
    puts("Você acertou o valor!");
}

void obtervalor(){
    puts("Valor entre 0 a 100: ");
    scanf("%hd", &vdigitado);
}

int resultest(){
    if (selecionadov > vdigitado){
        puts("Valor baixo, tente novamente!");
    }else if (selecionadov < vdigitado){
        puts("Valor alto, tente novamente!");
    }
    return selecionadov != vdigitado;

}