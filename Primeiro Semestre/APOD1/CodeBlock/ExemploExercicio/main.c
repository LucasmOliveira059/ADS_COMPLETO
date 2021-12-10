#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 4

int main()
{
   setlocale(LC_ALL, "Portuguese");
   int matriz[TAM][TAM], linha, coluna, soma=0, s_diag_pri = 0, s_diag_sec = 0, s_seg_linha = 0, mult_linha_2 = 1;

  //gerar os valores da matriz
  for(linha=0; linha < TAM; linha++){
	for(coluna = 0; coluna < TAM; coluna++){
  	printf("[%d,%d] = ",linha, coluna);//[linha, coluna] =
  	scanf("%d",&matriz[linha][coluna]);
  	soma += matriz[linha][coluna];
  	//somando os valores das diagonais
  	if (linha == coluna){
    	s_diag_pri += matriz[linha][coluna];//diagonal primária
  	}
  	if ((linha+coluna)== (TAM - 1)){
    	s_diag_sec += matriz[linha][coluna];//diagonal secundária
  	}
  	if(linha == 1){
    	s_seg_linha += matriz[linha][coluna];
  	}
  	if (linha == 2){
    	mult_linha_2 *= matriz[linha][coluna];
  	}
	}
  }
  printf("\nExibindo a matriz\n\n");
  for(linha=0; linha < TAM; linha++){
	for(coluna = 0; coluna < TAM; coluna++){
   	printf("%4d",matriz[linha][coluna]);
	}
	printf("\n");
  }

  printf("\n\nDiferença das diagonais %d\n",s_diag_pri - s_diag_sec);
  printf("\nMédia = %.2f", (float)soma/9);
  printf("\nSoma dos valores da segunda linha = %d\n\n",s_seg_linha);
  printf("A multiplicação dos valores da linha = %d\n\n",mult_linha_2);


}
