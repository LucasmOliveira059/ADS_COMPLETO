#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num, num1, num2, num3;
    printf("Digite um numero inteiro de 3 digitos positivo: ");
    scanf("%d", &num);
    if (num > 10) {
       num1 = num%10;
	   num = num/10;
	   num2 = num%10;
	   num = num/10;
	   num3=num%10;
	   num=num/10;
   }
   printf("%d%d%d\n", num1, num2, num3);
   system("pause");
   return 0;
}
