#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
     float horadia = 5.50;
    printf("Voce recebe por hora: R$%.2f", horadia);
    float horames;
    printf("\nQuantas horas voce trabalhou esse mes: ");
    scanf("%f", &horames);
    float hrstrab = horadia * horames;
    float bonus, salfim;
    bonus = hrstrab * 0.25;
    salfim = hrstrab + bonus;
    printf("Voce recebera esse mes: R$%.2f", salfim);
    printf("\n\n");
    system("pause");
    return 0;
}
