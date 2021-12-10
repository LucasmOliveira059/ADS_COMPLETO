#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale(LC_ALL, "Portuguese");

int **p1, **p2, **p3; //Montando as matrizes
int Matriz; //valor para armazenar tamanho

printf("Digite o valor de tamanho da Matriz quadrada: ");
scanf("%d", &Matriz);

p1 = (int**) malloc(Matriz * sizeof(int*));

for (int i = 0; i<Matriz; i++){
    p1[i] = (int*) malloc(Matriz* sizeof(int));
    for (int j = 0; j<Matriz; j++){
        printf("(Matriz A- [%d][%d]) :",i,j);
        scanf("%d",&p1[i][j]);
        }
    }
system("pause");
system("cls");

p2 = (int**) malloc(Matriz * sizeof(int*));

for (int i = 0; i<Matriz; i++){
    p2[i] = (int*) malloc(Matriz* sizeof(int));
    for (int j = 0; j<Matriz; j++){
        printf("(Matriz B - [%d][%d]) :",i,j);
        scanf("%d",&p2[i][j]);
        }
    }

system("pause");
system("cls");

p3 = (int**) malloc(Matriz * sizeof(int*));

for (int i =0; i< Matriz; i++){
    p3[i] = (int*)malloc(Matriz * sizeof(int));
    for(int j = 0; j< Matriz; j++){
        p3[i][j] = p1[i][j] + p2[i][j];
        printf("[%d]", p3[i][j]);
            if (j == 2)printf("\n");

        }
    }

}

