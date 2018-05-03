#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tree.h"

void main()
{
	int nums[] = {1,2,3};
	int size = sizeof(nums)/sizeof(nums[0]);
	struct Solution* obj = solutionCreate(nums, size);
	int i = 0;
	int* param_1 = solutionReset(obj,&size);
	for(i = 0; i < size; i++){
		printf("param[%d] = %d \n",i,param_1[i]);
	}
	int* param_2 = solutionShuffle(obj,&size);
	for(i = 0; i < size; i++){
		printf("param[%d] = %d \n",i,param_2[i]);
	}
	solutionFree(obj);

}


