#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num;
    printf("Digite um numero inteiro: \n");
    scanf("%d", &num);
    printf("\nAntecessor do numero: %d ",num - 1);
    printf("\nSucessor do numero: %d ",num + 1);
    printf("\n\n");
    system("pause");
    return 0;
}
