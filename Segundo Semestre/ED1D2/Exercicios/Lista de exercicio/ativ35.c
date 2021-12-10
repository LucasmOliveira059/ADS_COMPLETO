#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float c, k;
    printf("Digite a temperatura em Graus Celsius: ");
    scanf("%f", &c);
    k= c + 273.15;
    printf("\nA temperatura em Kelvin eh: %.2f", k);
    return 0;
}
