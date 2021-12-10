#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float p, c;
    printf("Digite o valor em polegadas: ");
    scanf("%f", &p);
    c = p * 2.54;
    printf("\nO valor convertido em centimetros eh: %.2fcm", c);
    return 0;
}
