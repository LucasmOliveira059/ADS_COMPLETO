#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float m2, hc;
    printf("Digite a area em m2: ");
    scanf("%f", &m2);
    hc = m2 * 0.0001;
    printf("\nA area em hectares eh: %.2f",hc);
    return 0;
}
