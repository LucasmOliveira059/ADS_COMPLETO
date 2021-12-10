#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int quadrado = 8 ;
    printf("O tamanho de um lado do quadrado e:%dcm" , quadrado);
    printf("\nA area do quadrado e: %dcm ",quadrado*quadrado);
    printf("\n\n");
    system("pause");
    return 0;
}
