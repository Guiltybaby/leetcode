#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
	int nums[] = {3,2,4};
	int numsSize = sizeof(nums)/sizeof(nums[0]);
	int* ret;
	ret = twoSum(&(nums[0]),numsSize,6);
	if(ret){
			printf("ret = %d \n",ret[0]);
			printf("ret = %d \n",ret[1]);
	}else{
		printf("error ret = %d\n",ret);
	}
}


