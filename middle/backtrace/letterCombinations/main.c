#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
	char* s = "23";
	int count = 0;
	char** strs= letterCombinations(s,&count);
	int i = 0;
	for(i = 0; i< count ; i++){
		printf("str[%d] = %s \n",i,strs[i]);
	}
}


