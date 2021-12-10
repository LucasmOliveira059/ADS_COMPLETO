#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    const double pi = 3.14;
    float graus, r;
    printf("Digite o valor do angulo em radianos: ");
    scanf("%f", &r);
    graus = r * 180/pi;
    printf("\nO angulo convertido em graus eh: %.2f", graus);
    return 0;
}
