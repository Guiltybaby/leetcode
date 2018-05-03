#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
	int nums[]={7,5,1,6,8,9,4,1,5,};
	int ret = maxProfit(nums,sizeof(nums)/sizeof(nums[0]));
	printf("%d \n",ret);
}


