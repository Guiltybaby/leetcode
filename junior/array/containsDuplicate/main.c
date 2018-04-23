#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "containsDuplicate.h"

void main()
{
	int nums[] = {1,2,3,4,5,6,7,8,8};
	int numsSize = sizeof(nums)/sizeof(nums[0]);
	int k = 1;
	int ret = 0;
	int i = 0;
	ret = containsDuplicate(&(nums[0]),numsSize);
	if(ret){
		printf("contains Duplicate \n");
	}else{
		printf(" not contains Duplicate \n");
	}
}


