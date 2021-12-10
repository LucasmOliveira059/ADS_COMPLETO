#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
 setlocale(LC_ALL, "Portuguese");

 int x, y;
 printf("Digite um valor: \n");
 scanf("%d", &x);
 printf("\nDIgite outro valor: \n") ;
 scanf("%d", &y);
 printf("============= \n");
 printf("%d ÷ %d = %d \n",x, y, x/y);
 printf("%d - %d = %d \n",x, y, x-y);
 printf("%d x %d = %d \n",x, y, x*y);
 printf("============= \n");
}
