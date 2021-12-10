#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

int main()
{
bool bExit = false;
int iMat[10], i = 0, ii = 0;

setlocale(LC_ALL, "Portuguese");

printf("Digite 10 números diferentes para completar o vetor: \n");


for(i=0; i<10; i++)
{

        printf("%i-> ", i);
        if(i!=0)
        {
            //Função para verificar se são repetidos...
            do{               scanf("%i", &iMat[i]);
                for(ii=0; ii<i; ii++)
                {

                        if((iMat[i]) == (iMat[ii]))
                        {
                            printf("\nNúmero repetido, digite outro: \n");
                            printf("%i -> ", i);
                            ii = 11;
                            bExit = true;
                        }else{
                            bExit = false;
                        }
                    }

            }while(bExit);
        }else{
            scanf("%i", &iMat[i]);
        }

}


printf("\n");
for(i=0; i<10; i++)
{
    printf("%4i ", iMat[i]);

}


return 0;
}
