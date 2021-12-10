#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float f, c;
    printf("Digite a temperatura em Graus Fahrenheit: ");
    scanf("%f", &f);
    c = 5.0*(f -32.0)/9.0;
    printf("A temperatura em Celsius eh: %.2f", c);
    return 0;
}
