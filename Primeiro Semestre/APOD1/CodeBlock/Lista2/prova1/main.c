#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int A[8][3], linha, coluna;
    int fatutotal, fatumed, fatumenos;
    int resultado1;
    printf("Preencha a primeira coluna qtd de produtos: \n");
    printf("A segunda coluna são os preços dos produtos \n");
    printf("E a Terceira se refere ao faturamento \n");

    for(linha = 0; linha<8; linha++){
        for(coluna = 0; coluna < 3; coluna++){
                printf("linha %d | Coluna %d \n", linha, coluna);
                scanf("%d", &A[linha][coluna]);
                if(linha ==0 && coluna == 0){
                    resultado1 = (A[linha][coluna]* A[linha][coluna]);
                    fatutotal = fatutotal + resultado1;
                }
                fatumed = fatutotal / 8;
                if(A[linha][coluna] < fatumed){
                    fatumenos++;
                }
         }

    }
    printf("O faturamento total foi %d , A média de faturamento %d e %d ficaram abaixo: ", fatutotal, fatumed, fatumenos);
}
