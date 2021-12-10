#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i, q, cubo, r1, r2;
    i =0;
    cubo = 0;
    q = 0;
    printf("|  Número | Quadrado  |   Cubo    |\n");

        for(i = 0; i < 11; i++){


            for(q = 2; q > 0; q--){
                    r1 = i*i;
                }
            for(cubo = 3; cubo > 0; cubo--){
                    r2 = i*i*i;}
            printf("%10d| %10d| %10d|\n", i, r1, r2);

        }
          printf("___________________________________");
}
