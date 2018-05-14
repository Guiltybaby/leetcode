#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
	char* str = "babad";
	char* ret = longestPalindrome(str);
	if(ret){
		printf("ret = %s \n",ret);
	}else{
		printf("error \n");
	}
}


