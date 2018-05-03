#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{

	int nums[] = {-2,1,-3,4,-1,2,1,-5,4};
	int ret = maxSubArray(nums,sizeof(nums)/sizeof(nums[0]));
	printf("%d \n",ret);
}


