#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int tw, hoex, cont, sem;
float sal, salhora, total;
printf("Calculando o Sal�rio: \n");
printf("Digite o seu sal�rio base: \n");
scanf("%f", &sal);
salhora = sal / 160;
cont = 0;

   do{
        printf("Digite o n�mero de Horas trabalhadas nessa Semana: \n");
        scanf("%d", &sem);
        tw+=sem;
        cont++;
    }while(cont < 4);
    if(tw < 160){
        printf("Voc� trabalhou menos do que deveria, haver�o descontos em seu sal�rio! \n");
    }
    if(tw > 160 && tw <= 200){
        hoex = tw - 160;
        total = (salhora * 50 / 100)*hoex + sal;
        printf("Seu sal�rio total desse m�s foi %.2f \n",total);
    }
    if(tw == 160){
        printf("Seu sal�rio desse M�s foi %2.f", sal);
    }
    if(tw > 200){
    printf("C�lculo inv�lido, ou voc� trabalhou mais do que a lei permite, ou mais horas do que as poss�veis"); }

    printf("\nVoc� trabalhou no total %d horas esse m�s \nRecebendo %.2f por hora de acordo com o salario base", tw, salhora);
}
