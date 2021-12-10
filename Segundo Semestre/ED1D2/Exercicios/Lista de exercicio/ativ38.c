#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float milhas, km;
    printf("Digite a distancia em milhas: ");
    scanf("%f", &milhas);
    km = 1.61 * milhas;
    printf("\nA distancia convertida em milhas: %.2f", km);
    return 0;
}
