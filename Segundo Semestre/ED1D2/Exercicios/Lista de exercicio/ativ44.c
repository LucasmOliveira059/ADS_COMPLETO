#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float mc, lt;
    printf("Digite o volume em m3: ");
    scanf("%f", &mc);
    lt = 1000 * mc;
    printf("\nO valor convertido em litros eh: %.2f", lt);
    return 0;
}
