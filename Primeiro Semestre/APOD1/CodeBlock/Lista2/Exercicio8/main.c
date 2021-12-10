#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");

 int n1, re, cont;

 printf("Digite o numero: ");
 scanf("%d", &n1);


 for(cont = 15; cont >= 0; cont--) {
    re = n1 >> cont;

    if(re & 1) {
        printf("1");
    } else {
        printf("0");
    }
 }
}
