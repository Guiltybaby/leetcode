#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "rotate.h"

void main()
{
	int nums[] = {1,2,3,4,5,6,7,8};
	int numsSize = sizeof(nums)/sizeof(nums[0]);
	int k = 1;
	int ret = 0;
	int i = 0;
	rotate(&(nums[0]),numsSize,k);
	if(!ret){
		for(i = 0; i< numsSize; i++){
			printf("nums[%d] = %d \n",i,nums[i]);
		}
	}else{
		printf("error ret = %d\n",ret);
	}
}


