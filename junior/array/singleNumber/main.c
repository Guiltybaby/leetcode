#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
	int nums[] = {1,2,3,4,5,6,7,8};
	int numsSize = sizeof(nums)/sizeof(nums[0]);
	int ret = 0;
	ret = singleNumber(&(nums[0]),numsSize);
	if(ret){
			printf("ret = %d \n",ret);
	}else{
		printf("error ret = %d\n",ret);
	}
}


