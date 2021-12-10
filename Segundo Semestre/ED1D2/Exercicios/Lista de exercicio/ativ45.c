#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float lt, m3;
    printf("Digite o valor em litros: ");
    scanf("%f", &lt);
    m3 = lt /1000;
    printf("\nO valor convertido em m3: %.2f",m3);
    return 0;
}
