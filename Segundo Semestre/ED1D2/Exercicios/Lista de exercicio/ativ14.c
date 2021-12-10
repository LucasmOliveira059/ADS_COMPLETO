#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
  float valor, desconto, vfinal;
    printf("Digite o preco do produto:");
    scanf("%f" , &valor);
    desconto =  valor * 0.12;
    vfinal = valor - desconto;
    printf("\nO valor com desconto eh: %.2f" ,vfinal);
    printf("\n\n");
    system("pause");
    return 0;
}
