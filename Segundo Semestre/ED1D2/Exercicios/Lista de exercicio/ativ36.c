#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float kmh, ms;
    printf("Digite a velocidade em Km/h: ");
    scanf("%f", &kmh);
    ms= kmh / 3.6;
    printf("\nA velocidade convertida em m/s : %.2f", ms);
    return 0;
}
