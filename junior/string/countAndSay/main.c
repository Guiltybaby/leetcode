	#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
	int nums = 6;
	char* res = countAndSay(nums);
	if(res){
		printf("res = %s \n",res);
		free(res);
	}else{
		printf("error \n");
	}
}


