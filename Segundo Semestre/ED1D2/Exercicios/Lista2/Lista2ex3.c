#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int func(int n);

int main(){
    setlocale(LC_ALL, "Portuguese");

    int n, c=0;

printf("Digite um numero: ");
scanf("%d",&n);

printf("%d\n",func( n));

}

int func(int n){
   for(int c=0; c<n; c++){
    printf("%d\n",c);
   }
}
