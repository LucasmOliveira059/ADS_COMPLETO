#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num1, num2, num3, soma;
    printf("Insira o primeiro valor: ");
    scanf("%d", &num1);
    printf("Insira o segundo valor: ");
    scanf("%d", &num2);
    printf("Insira o terceiro valor: ");
    scanf("%d", &num3);
    soma = num1 + num2 + num3;
    printf("soma = %d", soma);
    printf("\n\n");
    system("pause");
    return 0;
}
