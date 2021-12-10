#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float num1;
    printf("Escolha um valor real: \n");
    scanf("%f", &num1);
    printf("A quinta parte de %.2f e = %.2f", num1, num1/5);
    printf("\n\n");
    system("pause");
    return 0;
}
