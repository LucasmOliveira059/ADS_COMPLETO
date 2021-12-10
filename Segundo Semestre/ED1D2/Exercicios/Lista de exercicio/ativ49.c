#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float jd, mt ;
    printf("Digite o comprimento em metros: ");
    scanf("%f", &mt);
    jd = mt /0.91;
    printf("\nO comprimento convertido em jardas: %.2f",jd);
    return 0;
}
