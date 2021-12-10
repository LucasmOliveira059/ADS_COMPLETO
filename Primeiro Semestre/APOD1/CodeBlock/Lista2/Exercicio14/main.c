#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
   setlocale(LC_ALL, "Portuguese");
   int A[10];

   for(int i = 0; i < 10; i++){
    printf("Digite um valor para A até completar o vetor: \n");
    scanf("%d", &A[i]);
    }

   for(int i=0; i<10; i++){
    printf("[%3d]", A[i]);
   }
    printf("\n");
   for(int i=0; i<10;i++){
        printf("[%3d]", (A[i]/2));
   }

   }
