
#ifndef NULL
#define NULL ((void *)0)
#endif
#ifndef null
#define null ((void *)0)
#endif

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void cn(
	int** result,
	int* nums, 
	int numsSize,
	int* temp,
	int size,
	int count,
	int** columnSizes,
	int* returnSize){
	if(count == numsSize){
		if(size){
			result[*returnSize] = malloc(size*sizeof(int));
			memcpy(result[*returnSize],temp,sizeof(int)*size);
			(*columnSizes)[*returnSize] = size;

			(*returnSize)++;
		}
		return;
	}
	count++;

	cn(result,nums,numsSize,temp,size,count,columnSizes,returnSize);
	temp[size] = nums[count - 1];
	size++;
	cn(result,nums,numsSize,temp,size,count,columnSizes,returnSize);
}

int** subsets(int* nums, int numsSize, int** columnSizes, int* returnSize) {
	int** result =  malloc(sizeof(int*)* (int)(pow(2,numsSize)));
	int* cSizes =  malloc(sizeof(int)* (int)(pow(2,numsSize)));
	*columnSizes = cSizes;
	result[0] = NULL;
	cSizes[0] = 0;
	*returnSize = 1;
	int* temp = malloc(sizeof(int)* numsSize);
	cn(result,nums,numsSize,temp,0,0,columnSizes,returnSize);
	free(temp);
	return result;
}

