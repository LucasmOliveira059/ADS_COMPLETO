#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float m2, ac;
    printf("Digite a area em acres: ");
    scanf("%f", &ac);
    m2 = ac * 4048.58;
    printf("\nA area em acres eh: %.2f",m2);
    return 0;
}
