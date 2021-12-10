#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
   int raio = 12;
    float raioquadrado = raio * raio;
    printf("O valor do raio do circulo e:%d" , raio);
    printf("\nA area do circulo e: %.2f " , 3.14* raioquadrado);
    printf("\n\n");
    system("pause");
    return 0;
}
