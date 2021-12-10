#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int CalculoVantagens(int *n1, int *n2);
int calculoDeducoes (int *num1, int *num2);

int main()
{   setlocale(LC_ALL, "Portuguese");
    int x = 0, y = 0;
    printf("\nDigite o valor do Numero de horas trabalhadas e o salário por hora: \n");
    scanf("%d %d", &x, &y);
    int salarioBruto = CalculoVantagens(&x, &y);
    printf("\n o Salário bruto é: %d", salarioBruto);
    printf("\nDigite o Numero de filhos do beneficiado e o valor a ser pago por filho: \n");
    scanf("%d %d", &x, &y);
    int salarioFamilia = CalculoVantagens(&x, &y);
    printf("\n O benefício do salário família é : %d", salarioFamilia);
   int vantagens = salarioBruto + salarioFamilia;
   printf("\n O total em vantagens recebidos são : %d\t \n", vantagens);
    system("pause");
   system("cls");

   printf("\nAgora digite o valor do salário bruto e a taxa da previdência:");
   scanf("%d %d", &x, &y);
   int INSS = calculoDeducoes(&x, &y);
   printf("\n O valor do INSS é : %d \n", INSS);
   printf("\nDigite novamento o valor do salário bruto e o valor do imposto de renda:");
   scanf("%d %d", &x, &y);
   int IRPF = calculoDeducoes(&x, &y);
   printf("\n O valor do IRPF é : %d \n", IRPF);
   int Deducoes = INSS + IRPF;
   printf("O valor total das deduções será: %d\t \n", Deducoes);

    system("pause");

    return 0;
}

int CalculoVantagens(int *n1, int *n2){
    return (*n1 * *n2);
}
int calculoDeducoes(int *num1, int *num2){
    return(*num1 * *num2);
}
