#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int CalculoVantagens(int *n1, int *n2);
int calculoDeducoes (int *num1, int *num2);

int main()
{   setlocale(LC_ALL, "Portuguese");
    int x = 0, y = 0;
    printf("\nDigite o valor do Numero de horas trabalhadas e o sal�rio por hora: \n");
    scanf("%d %d", &x, &y);
    int salarioBruto = CalculoVantagens(&x, &y);
    printf("\n o Sal�rio bruto �: %d", salarioBruto);
    printf("\nDigite o Numero de filhos do beneficiado e o valor a ser pago por filho: \n");
    scanf("%d %d", &x, &y);
    int salarioFamilia = CalculoVantagens(&x, &y);
    printf("\n O benef�cio do sal�rio fam�lia � : %d", salarioFamilia);
   int vantagens = salarioBruto + salarioFamilia;
   printf("\n O total em vantagens recebidos s�o : %d\t \n", vantagens);
    system("pause");
   system("cls");

   printf("\nAgora digite o valor do sal�rio bruto e a taxa da previd�ncia:");
   scanf("%d %d", &x, &y);
   int INSS = calculoDeducoes(&x, &y);
   printf("\n O valor do INSS � : %d \n", INSS);
   printf("\nDigite novamento o valor do sal�rio bruto e o valor do imposto de renda:");
   scanf("%d %d", &x, &y);
   int IRPF = calculoDeducoes(&x, &y);
   printf("\n O valor do IRPF � : %d \n", IRPF);
   int Deducoes = INSS + IRPF;
   printf("O valor total das dedu��es ser�: %d\t \n", Deducoes);

    system("pause");

    return 0;
}

int CalculoVantagens(int *n1, int *n2){
    return (*n1 * *n2);
}
int calculoDeducoes(int *num1, int *num2){
    return(*num1 * *num2);
}
