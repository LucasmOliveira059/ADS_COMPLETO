#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num1, num2, num3, num4;
   printf("Digite 4 numeros inteiros :\n");
   scanf("\n%d\n%d\n%d\n%d\n", &num1, &num2, &num3, &num4);
   printf("\n%d\n%d\n%d\n%d\n", num1, num2, num3, num4);
    system("pause");
   return 0;
}
