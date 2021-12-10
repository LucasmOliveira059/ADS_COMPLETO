#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int A[5][4], B[5][4], fat;

    for(int i =0; i<5; i++){
        for(int j = 0; j<4; j++){
            printf("A[%d][%d]", i,j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("\n");
     for(int i = 0;i<5;i++){
        for(int j = 0; j < 4; j++){
            printf("[%d]", A[i][j]);
            if(j == 3){
                printf("\n");
            }
        }
    }
    printf("\n");
    for(int i = 0; i<5;i++){
        for(int j=0; j<4;j++){
            for(fat = 1; A[i][j] > 1; A[i][j] = A[i][j]-1){
                fat = fat*A[i][j];
                B[i][j] = fat;
            }
        }
    }

    for(int i = 0;i<5;i++){
        for(int j = 0; j < 4; j++){
            printf("[%d]", B[i][j]);
            if(j == 3){
                printf("\n");
            }
        }
    }
}
