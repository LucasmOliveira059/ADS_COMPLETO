#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float jd, mt ;
    printf("Digite o comprimento em jardas: ");
    scanf("%f", &jd);
    mt = 0.91 * jd;
    printf("\nO comprimento convertido em metros: %.2f",mt);
    return 0;
}
