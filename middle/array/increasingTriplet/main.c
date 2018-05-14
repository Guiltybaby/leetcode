#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
	int nums[] = {-1,0,1,2,-1,-4};
	int ret = increasingTriplet(&(nums[0]),sizeof(nums)/sizeof(nums[0]));
	if(ret){
		printf("yes\n");
	}else{
		printf("no\n");
	}
}


