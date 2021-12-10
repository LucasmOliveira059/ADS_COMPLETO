#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
 setlocale(LC_ALL, "Portuguese");

 int A[2], j, C[1], n;
 int i = 0, media =0;

 do{
    for(j = 0; j < 2; j++){
               printf("Digite a nota do aluno(a)\n");
               scanf("%d", &A[j]);
            }
            for(n = 0; n<1; n++){
                    C[n] = A[0] + A[1];
                }
              media = (A[0]+ A[1]+ C[n])/3;
              printf("\n");
              printf("%d", media);

            if(media < 6){
                printf("Reprovado!");
            }
            if(media >= 6){
                printf("Aprovado");
            }
    printf("Deseja calcular mais uma nota? Se sim digite qualquer número, senão -1 \n");
    scanf("%d", &i);
 }while(i >= 0);
}
