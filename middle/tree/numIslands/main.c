#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tree.h"

void main()
{
	char a[4][5] = {
			{'1','1','1','1','0'},
			{'1','1','0','1','0'},
			{'1','1','0','0','0'},
			{'0','0','0','0','0'},
		};
	int i = 0;
	char* b[4];
	for(i = 0; i < 4; i++){
		b[i] = a[i];
	}
	int ret = numIslands(b,4,5);
	printf("ret = %d \n",ret);
}


