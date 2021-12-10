#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int notas[6], n, mf, resul;

        for(int i = 0; i<6; i++){
            printf("Digite o valor da nota: \n");
            scanf("%d", &notas[n]);
            mf+=notas[n];
        }

        printf("\n");
        resul = mf/6;
        printf("%d", resul);
        printf("\n");
        if(resul >= 0 && resul<=5){
            printf("[0,0] a [5,0] - - Reprovado");
        }
        if(resul >= 5 && resul< 7){
            printf("[5,0] a [7,0] - - Recuperação");
        }
        if(resul >= 7 && resul< 9){
            printf("[7,0] a [9,0] - - Satisfatório");
        }
        if(resul >= 9){
            printf("[9,0] a [10,0] - - Ótimo");
        }
}
