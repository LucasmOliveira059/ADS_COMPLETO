#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
 setlocale(LC_ALL, "Portuguese");
 int z, x, cont;

 cont = 0;
 do {
        printf("Escolha um valor inteiro: \n");
        scanf("%d", &x);
        cont++;
        z+=x;

 }while(cont < 3);
 printf("A soma dos valores digitados foi: %d", z);

}
