#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float vet[] = {0,1,2,3,4,5,6,7,8,9};
    int *ptr;
    ptr = vet;
    for(int i = 0; i<10; i++){
        printf("posição %d = %d\t\n", i, &*(ptr +i));
    }
}
