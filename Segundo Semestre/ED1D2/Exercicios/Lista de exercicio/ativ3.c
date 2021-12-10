#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float num1 = 9.5;
    printf("O quadrado de 9.5 e = %.2f", num1*num1);
    printf("\n\n");
    system("pause");
    return 0;
}
