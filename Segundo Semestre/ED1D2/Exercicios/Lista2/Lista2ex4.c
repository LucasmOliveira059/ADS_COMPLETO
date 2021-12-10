#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int func(int x, int y);

main(){
    setlocale(LC_ALL, "Portuguese");

    int x,y,c=0;

    printf("Digite o valor de X: ");
    scanf("%d",&x);
    printf("Digite o valor de Y: ");
    scanf("%d",&y);

    printf("\nResultado: %d\n\n",func( x,y));
}

int func(int x, int y){
    int pot=x;
    for(int c=1; c<y; c++){
        pot = pot*x;
    }return pot;
}

