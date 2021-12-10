#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int matriz[10][2], mais_alto, mais_baixo;
    printf("Digite na primeira coluna o número e na segunda altura do aluno. \n");
        for(int i = 0; i < 10; i++){
            for(int j = 0; j < 2; j++){
                printf("\nLinha %d | Coluna %d \n", i, j);
                scanf("%d", &matriz[i][j]);
                if(i == 0 && j == 0){
                    mais_alto = matriz[0][0];
                    mais_baixo = matriz[0][0];
                }
                if(matriz[i][j] > mais_alto){
                    mais_alto = matriz[i][j];
                }
                if(matriz[0][j] < mais_baixo){
                    mais_baixo = matriz[i][j];
                }
                printf("%d %d", mais_alto, mais_baixo);

            }

        }
        printf("%d  %d \n ", mais_alto, mais_baixo);
}
