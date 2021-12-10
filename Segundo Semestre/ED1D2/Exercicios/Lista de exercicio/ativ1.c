#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{


    int a;
    float b;
    printf("Digite um numero inteiro: \n");
    scanf("%d", &a);
    printf("Digite um real: \n");
    scanf("%f", &b);
    printf("Numero inteiro %d\nNumero real %.2f ", a, b);
    printf("\n\n\n");
    system("pause");
    return 0;
}
