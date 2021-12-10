#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
 setlocale(LC_ALL, "Portuguese");

 float N1, N2, N3, ME, MF;

printf("Digite a primeira nota: \n");
scanf("%f", &N1);
printf("Digite a segunda nota: \n");
scanf("%f", &N2);
printf("Digite a terceita nota: \n");
scanf("%f", &N3);
printf("Digite a média dos exercícios: \n");
scanf("%f", &ME);
MF = (N1+(N2*2)+(N3*3)+ME)/7;

    if(MF>=9){
        printf("Sua nota foi %.2f e o conceito A, Parabéns!\n", MF);
    }
    if(MF>=7.5 && MF < 9){
        printf("Sua nota foi %.2f e seu conceito B", MF);
    }
    if(MF>=6 && MF<7.5){
        printf("Sua nota foi %.2f e seu conceito é C", MF);
    }
    if(MF<6){
        printf("Sua nota foi %2.f e seu conceito D, Estude mais!", MF);
    }
}
