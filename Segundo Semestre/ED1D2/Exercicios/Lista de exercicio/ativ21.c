#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");

    float degrau, altura, qtd;
    printf("Insira a altura do degrau em centimetros: ");
    scanf("%f", &degrau);
    printf("Qual altura deseja alcancar em metros:");
    scanf("%f", &altura);
    qtd =  (degrau*100) / altura;
    printf("\nA quantidade de degraus para alcancar a altura eh:%.0f" , qtd);
    return 0;
}
