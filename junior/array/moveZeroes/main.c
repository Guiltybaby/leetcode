#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
	int nums[] = {8,9,3,4,0,1,0,0,0,3,0,0,0};
	int numsSize = sizeof(nums)/sizeof(nums[0]);
	int* out = 0;
	int returnSize = 0;
	moveZeroes(&(nums[0]),numsSize);
	if(nums){
		int i = 0;
		for(i = 0; i < numsSize; i++){
			printf("out = %d \n",nums[i]);
		}
	}else{
		printf("error \n");
	}
}


