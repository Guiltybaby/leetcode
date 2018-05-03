#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tree.h"

void main()
{

	int n = 15;
	int size;
	char** res;
	res = fizzBuzz(n,&size);
	int i = 0;
	for(i = 0; i < size; i++){
		printf("%s \n",res[i]);
	}
}


