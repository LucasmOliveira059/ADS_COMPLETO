#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float ms, kmh;
    printf("Digite a velocidade em m/s: ");
    scanf("%f", &ms);
    kmh = ms *3.6;
    printf("\nA velocidade convertida em km/h eh: %.2f", kmh);
    return 0;
}
