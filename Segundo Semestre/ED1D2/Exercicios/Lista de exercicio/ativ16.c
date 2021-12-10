#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float valor = 780.000;
    printf("O valor total eh:R$%.3f", valor );
    float gan1, gan2, desc2, gan3, desc3;
    gan1=  valor * 0.46;
    printf("\nPrimeiro ganhador recebe:R$%.3f", gan1);
    gan2=  valor * 0.32;
    printf("\nPrimeiro ganhador recebe:R$%.3f", gan2);
    gan3=  valor * 0.22;
    printf("\nPrimeiro ganhador recebe:R$%.3f", gan3);
    printf("\n\n");
    system("pause");
    return 0;
}
