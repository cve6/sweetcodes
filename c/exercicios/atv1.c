//criar um programa q verifica se eh menor de idade, adulto ou veio

#include <stdio.h>
#include <stdlib.h>

signed short idade;

int verificacao(signed short idade);
int pergunta();

int main()
{
    if (pergunta() == 1){
        verificacao(idade);
    }else{
        puts("Digite um número.");
        while (getchar() != '\n'); //limpa o "lixo"
    }
    return 0;
}

int pergunta()
{
    puts("Insira sua idade: ");
    return scanf("%hd", &idade);
}

int verificacao(signed short idade){
    if (idade >= 1 && idade <= 17){
        puts("Você é menor de idade.");
        }else if (idade >= 18 && idade <= 64){
        puts("Você é adulto.");
        }else if (idade >= 65 && idade <= 120){
        puts("Você é idoso.");
        }else if (idade == 0 || idade <= -1 || idade >= 120){
        puts("Faixa etária não identificada.");
        }
}

// || = OU
// && = e
// resoluçao: https://raw.githubusercontent.com/Sandynesk/Estudos-C/refs/heads/main/Atv1.c