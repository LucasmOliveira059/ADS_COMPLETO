#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
  char x;

	setlocale(LC_ALL,"Portuguese");
	printf("Digite se estado civ�l \n");
	scanf("%c", &x);
	printf("\" ******Estado civil***** \"\n");
	switch  (toupper(x)){
    	case 'S' : printf("Voc� � solteira sortuda");
             	break;
    	case 'C' : printf("Infelizmente voc� � casado");
             	break;
    	case 'D' : printf("d�-se essa nova chance, permane�a solteiro!");
             	break;
    	case 'V' : printf("Vi�vo");
             	break;
    	default : printf("Valor digitado: � inv�lido.\n");
	}
}
