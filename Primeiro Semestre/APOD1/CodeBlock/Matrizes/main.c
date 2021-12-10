#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
  setlocale(LC_ALL, "Portuguese");
  int NUMEROS[4][4],L,C;
  srand(time(NULL));
  //armazenar os valores da matriz
  for(L=0;L<4;L++){//linhas da matriz
 	for(C=0;C<4;C++){//colunas da matriz
    	NUMEROS[L][C]=rand() % 100;//nrs aleatórios de 0 a 20
    	//scanf("%d",NUMEROS[L][C]);
 	}
   }
   //exibir a matriz
   for(L=0;L<4;L++){
 	for(C=0;C<4;C++){
    	printf("%3d",NUMEROS[L][C]);
 	}
 	printf("\n");
   }

}
