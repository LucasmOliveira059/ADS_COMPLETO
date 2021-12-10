#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int n;

printf("Selecione um valor inteiro qualquer para N: ");
scanf("%d", &n);

    if(n <= 10){
        printf("F1");
    }
    if(n >10 && n <=100){
        printf("F2");
    }
    if(n>100){
        printf("F3");
    }
}
