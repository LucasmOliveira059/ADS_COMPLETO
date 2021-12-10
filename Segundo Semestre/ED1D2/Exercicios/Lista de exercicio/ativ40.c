#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    const double pi = 3.14;
    float graus, r;
    printf("Digite o valor do angulo em graus: ");
    scanf("%f", &graus);
    r = graus * pi/180;
    printf("\nO angulo convertido em radianos eh: %.2f", r);
    return 0;
}
