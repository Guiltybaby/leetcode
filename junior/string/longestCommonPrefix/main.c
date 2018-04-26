	#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
	char* nums[] = {
			"alower","flow","flight"
		};
	int strsSize = 2;
	char* res = longestCommonPrefix(nums,3);
	printf("nums[%d] = %p\n",0,nums[0]);
	printf("nums[%d] = %p\n",1,nums[1]);
	if(res){
		printf("\nprefix = %s \n",res);
		free(res);
	}else{
		printf("error ");
	}
}


