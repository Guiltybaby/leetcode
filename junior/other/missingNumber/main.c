#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{

	int nums[] = {0,5,1,2,4};
	int res = missingNumber(nums,sizeof(nums)/sizeof(nums[0]));
	printf("%d \n",res);
}


