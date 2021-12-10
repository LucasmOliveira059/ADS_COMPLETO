#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float km, milhas;
    printf("Digite a distancia em quilometros: ");
    scanf("%f", &km);
    milhas = km / 1.61;
    printf("\nA velocidade convertida em milhas eh: %.2f", milhas);
    return 0;
}
