#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
	int nums[] = {8,9};
	int numsSize = sizeof(nums)/sizeof(nums[0]);
	int* out = 0;
	int returnSize = 0;
	out = plusOne(&(nums[0]),numsSize,&returnSize);
	if(out){
		int i = 0;
		for(i = 0; i < returnSize; i++){
			printf("out = %d \n",out[i]);
		}
		free(out);
		printf("returnSize = %d\n",returnSize);
	}else{
		printf("error \n");
	}
}


