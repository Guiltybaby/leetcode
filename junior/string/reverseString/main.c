#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
	char nums[10] = "hello";
	char* res = reverseString(nums);
	if(res){
		printf("%s \n",res);
	}else{
		printf("error \n");
	}
}


