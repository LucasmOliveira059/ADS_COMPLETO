#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
  int x;

	setlocale(LC_ALL,"Portuguese");
	printf("Digite um número inteiro entre 1 e 5 \n");
	scanf("%d", &x);
	printf("\"Olá \"\n");
	switch (x){
    	case 1 : printf("Valor de x: %d \n", x);
             	break;
    	case 2 : printf("Valor do dobro de %d: %d \n", x, 2*x);
             	break;
    	case 3 : printf("Valor do triplo de %d: %d \n", x, 3*x);
             	break;
    	case 4 : printf("Valor do quadruplo de %d: %d \n", x, 4*x);
             	break;
    	default : printf("Valor digitado: %d é inválido.\n", x);
	}
}
