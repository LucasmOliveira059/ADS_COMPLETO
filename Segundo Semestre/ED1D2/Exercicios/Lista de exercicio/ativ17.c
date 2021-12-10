#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
     float dias;
    printf("\nQuantos dias o encanador trabalhou? ");
    scanf("%f" , &dias);
    float sal = 30.00;
    float ir, salfinal;
    ir = sal * 0.08;
    salfinal = sal - ir;
    printf("\nO encanador recebera: R$%.2f" , salfinal * dias);
    printf("\n\n");
    system("pause");
    return 0;
}
