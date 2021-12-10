#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float m2, hc;
    printf("Digite a area em hectares: ");
    scanf("%f", &hc);
    m2 = hc *10000;
    printf("\nA area em hectares eh: %.2f",m2);
    return 0;
}
