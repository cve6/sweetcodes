#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   int prazo_em_dias;
   double aporte, rentabilidade_anual, taxa;

   printf("\n===Renda Fixa===\n");
   printf("ps: O programa calcula com base em 100 do CDI.");
   printf("\n\nAporte inicial: ");
   scanf("%lf", &aporte);
   printf("\nPrazo em dias: ");
   scanf("%d", &prazo_em_dias);
   printf("\nTaxa CDI atual: ");
   scanf("%lf", &rentabilidade_anual);
   taxa = rentabilidade_anual/100;
   printf("%lf", taxa);
   return 0;
}
