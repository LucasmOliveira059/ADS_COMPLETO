#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
   char string[100];
   char letra = ' ';
   int x,y, cont1 = 0;

   printf("Digite uma pequena frase e saiba quantos espacos existem nela: \n");
   gets(string);
   for(x=0; x<strlen(string); x++){
    if(string[x]==letra){
        cont1++;
    }
   }
   for(x=0; x < strlen(string); x++)
    if(string[x] == ' ') {
        for(y=x; y < strlen(string); y++)
            string[y] = string[y+1];
    }
   printf("Existem %d espacos nesta frase!\n", cont1);
   printf("A frase sem espacos fica assim: \n");
   puts(string);

}
