#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{

	int nums[] = {2,7,9,3,1};
	int ret = rob(nums,sizeof(nums)/sizeof(nums[0]));
	printf("%d \n",ret);
}


