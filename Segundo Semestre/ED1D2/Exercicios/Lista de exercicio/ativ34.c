#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float k, c;
    printf("Digite a temperatura em Graus Kelvin: ");
    scanf("%.2f", &k);
    c = k - 273.15;
    printf("A temperatura em Celsius eh: %.2f", c);
    return 0;
}
