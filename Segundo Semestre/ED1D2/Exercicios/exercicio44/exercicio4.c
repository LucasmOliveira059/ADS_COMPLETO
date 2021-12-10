#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

        int matriz[5][5], v[10];
        int i = 0, j = 0, soma = 0;

    for(i = 0; i<5 ; i++){
       for(j = 0; j<5;j++){
        printf("Digite o elemtento da posição %d | %d : \n", i,j);
        scanf("%d", &matriz[i][j]);
       }
    }
    printf("\n");

    for(i=0;i<5;i++){
        for(j = 0; j<5;j++){
        soma = soma + matriz[i][j];
        }
        printf("Linha %d :  soma = %d \n", i+1, soma);
        v[i] = soma;
        soma = 0;
    }
    printf("\n");

    for(j = 0; j<5;j++){
         for(i=0;i<5;i++){
             soma = soma + matriz[i][j];
        }
        printf("Coluna %d :  soma = %d \n", j+1, soma);
        v[j + 5] = soma;
        soma = 0;
         }
    printf("\n");
    for(i = 0; i<5; i++){
        printf("Os valores da soma da linha %d são: %d\n", i+1, v[1]);
        printf("Os valores da soma da coluna %d são: %d\n", i+1, v[i + 5]);
    }
    printf("\n");
     for(i=0;i<5;i++){
        for(j = 0; j<5;j++){
          printf("| %d\t", matriz[i][j]);
        }
        printf("| \n");
     }
}
