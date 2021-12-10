#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
  char x;

	setlocale(LC_ALL,"Portuguese");
	printf("Digite se estado civíl \n");
	scanf("%c", &x);
	printf("\" ******Estado civil***** \"\n");
	switch  (toupper(x)){
    	case 'S' : printf("Você é solteira sortuda");
             	break;
    	case 'C' : printf("Infelizmente você é casado");
             	break;
    	case 'D' : printf("dê-se essa nova chance, permaneça solteiro!");
             	break;
    	case 'V' : printf("Viúvo");
             	break;
    	default : printf("Valor digitado: é inválido.\n");
	}
}
