#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
   setlocale(LC_ALL, "Portuguese");

   float cont, a, b, c, i;
   printf("Digite Os valores que deseja, ou -1 para encerrar: \n");
    cont = 0;
    i = 0;
   do{
    printf("Quantas vezes você usou o R.U este mês?\n");
    scanf("%f", &i);
    cont++;
        if(i>= 0 && i<10){
            a++;
        }
        if(i>= 10 && i<=15){
            b++;
        }
        if(i>15){
            c++;
        }

   }while(i>=0);
   cont--;
   printf("A porcentagem dos alunos que comeram menos de 10x é = %.2f %% \n", (a*100)/cont);
   printf("A porcentagem dos alunos que comeram Entre 10 e 15 vezes é = %.2f %% \n", (b*100)/cont);
   printf("E Dos que comeram mais de 15 vezes foi %.2f %% \n", (c*100)/cont);

}
