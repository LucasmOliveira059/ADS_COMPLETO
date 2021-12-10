#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int num1, num2;
    float hipotenusa;
    printf("Insira o primeiro valor: ");
    scanf("%d", &num1);
    printf("Insira o segundo valor: ");
    scanf("%d", &num2);
    hipotenusa = sqrt((num1* num1) + (num2* num2));
    printf("A hipotenusa dos valores é = %.2f", hipotenusa);
    printf("\n\n");
    system("pause");
    return 0;
}
