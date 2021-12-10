#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float kg, lb;
    printf("Digite massa em kg: ");
    scanf("%f", &kg);
    lb = kg /0.45;
    printf("\nO valor convertido em libras: %.2f",lb);
    return 0;
}
