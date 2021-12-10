#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");

int A[5][3], B[5][3], C[5][3];

    for(int i=0;i<5; i++){
        for(int j=0;j<3;j++){
            printf("A[%d][%d]", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("\n");
     for(int i=0;i<5;++i){
   for(int j=0;j<3;++j){
     printf("B[%d][%d]: ",i,j);
     scanf("%d", &B[i][j]);
   }
  }
  printf("\n");
    for(int i=0;i<5;++i){
   for(int j=0;j<3;++j){
     C[i][j] = A[i][j] + B[i][j];
      printf("%d\t",C[i][j]);
      if (j==2) printf("\n");
   }
  }
}
