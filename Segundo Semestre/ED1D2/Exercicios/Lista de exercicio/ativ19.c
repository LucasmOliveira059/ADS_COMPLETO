#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float salb;
    printf("Insira seu salario: R$");
    scanf("%f", &salb);
    float gratificacao, imposto, saltot;
    gratificacao = salb * 0.05;
    imposto = salb * 0.07;
    saltot = salb + gratificacao - imposto;
    printf("\nSalario a receber eh: R$%.2f", saltot);
    printf("\n\n");
    system("pause");
    return 0;
}
