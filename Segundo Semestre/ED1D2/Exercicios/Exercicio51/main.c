#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char string1[20], string2[20], string3[20];
    char letra;
    int x, cont1=0, cont2=0;

    printf("Digite duas palavras e finalize cada uma com o botão ENTER: \n");
    gets(string1);
    gets(string2);
    printf("Escolha a letra que deseja contar nessas palavras: \n");
    scanf("%c", &letra);

    for(x = 0; x<strlen(string1); x++){
        if(string1[x] == letra){
            cont1++;
        }
    }
    for(x = 0; x<strlen(string2); x++){
        if(string2[x] == letra){
            cont2++;
        }
    }
    printf("\n");
    printf("A letra \"%c\" aparece %d vezes na string 1, ", letra, cont1);
    printf("e %d vezes na  string 2. \n", cont2);

    printf("\n");
    printf("Digite parcialmente uma palavra para buscar nas strings \n");
    scanf("%s", &string3);
    printf("\n");
    if(strstr(string1,string3)){
        printf("\nA string \"%s\" está contida em: \"%s\ \n", string3, string1);
    }
    if(strstr(string2,string3)){
        printf("\nA string \"%s\" está contida em: \"%s\ \n", string3, string2);
    }

    printf("\n");
    strcat(string1, string2);
    printf("\nString concatenada: %s", string1);
    printf("\n\n");
}
