#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int tw, hoex, cont, sem;
float sal, salhora, total;
printf("Calculando o Salário: \n");
printf("Digite o seu salário base: \n");
scanf("%f", &sal);
salhora = sal / 160;
cont = 0;

   do{
        printf("Digite o número de Horas trabalhadas nessa Semana: \n");
        scanf("%d", &sem);
        tw+=sem;
        cont++;
    }while(cont < 4);
    if(tw < 160){
        printf("Você trabalhou menos do que deveria, haverão descontos em seu salário! \n");
    }
    if(tw > 160 && tw <= 200){
        hoex = tw - 160;
        total = (salhora * 50 / 100)*hoex + sal;
        printf("Seu salário total desse mês foi %.2f \n",total);
    }
    if(tw == 160){
        printf("Seu salário desse Mês foi %2.f", sal);
    }
    if(tw > 200){
    printf("Cálculo inválido, ou você trabalhou mais do que a lei permite, ou mais horas do que as possíveis"); }

    printf("\nVocê trabalhou no total %d horas esse mês \nRecebendo %.2f por hora de acordo com o salario base", tw, salhora);
}
