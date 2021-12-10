#include <stdio.h>
#include <stdlib.h>
#include "arqlib.h"

int func_rec(int n){
    if (n==0){
		return 0;
	}printf("%d\n",n);
	return func_rec(n - 1);
}

int func_it(int i){
    while(i >= 0){
		printf("%d \n",i);
		i--;
	}

}
