#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
	int count = 0;
	int n = 3;
	char** strs= generateParenthesis(n,&count);
	int i = 0;
	for(i = 0; i< count ; i++){
		printf("str[%d] = %s \n",i,strs[i]);
	}
}


