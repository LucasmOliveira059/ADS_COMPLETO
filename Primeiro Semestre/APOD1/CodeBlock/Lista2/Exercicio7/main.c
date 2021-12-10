#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
  setlocale(LC_ALL, "Portuguese");

  int cont;
  for(cont = 0; cont < 1000; cont++){
    if (cont % 7 == 0){
        printf("%4d\n", cont);
    }
  }
}
