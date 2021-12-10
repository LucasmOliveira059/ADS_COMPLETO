#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    FILE *f1, *f2;
    f1 = fopen("minuscula.txt", "w");
    if(f1 == NULL){
        printf("Erro na abertura");
        system("pause");
        exit(1);
    }
    char text[60];
    printf("Escreva um pequeno texto de até 50 caracateres: \n");
    fgets(text, 59, stdin);

    for(int i = 0; i < strlen(text); i++){
        fputc(text[i], f1);
    }
    fclose(f1);

    f1 = fopen("minuscula.txt", "r");
    f2 = fopen("maiuscula.txt", "w");
    if(f1 == NULL || f2 == NULL ){
        printf("Erro na abertura");
        system("pause");
        exit(1);
    }

    char c = fgetc(f1);
    while(c != EOF){
        fputc(toupper(c), f2);
        c = fgetc(f1);
    }
    fclose(f1);
    fclose(f2);



    f2 = fopen("maiuscula.txt", "r");
    char b = fgetc(f2);
    while(b != EOF){
        printf("%c", b);
        b = fgetc(f2);
    }
    printf("\n\n");
    fclose(f2);
    system("pause");
    return 0;
}
