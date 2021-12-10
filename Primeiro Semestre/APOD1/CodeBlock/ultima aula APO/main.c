#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define L 4
#define C 4
int main()
{
    setlocale(LC_ALL, "Portuguese");
   int exemplo[L][C],linha,coluna;


    printf("A matriz quadrática foi gerada: \n");
   for(linha=0; linha <L; linha++){
 	for(coluna=0;coluna<C;coluna++){
            if(linha == coluna){
                exemplo[L][C] = 1;
            } else{
            exemplo[L][C] = 0; }
    	printf("%4d",exemplo[L][C]);
 	}
 	printf("\n");
   }

}
