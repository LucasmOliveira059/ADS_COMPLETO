#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float kg, lb;
    printf("Digite massa em libras: ");
    scanf("%f", &lb);
    kg = lb *0.45;
    printf("\nO valor convertido em quilos é: %.2f",kg);
    return 0;
}
