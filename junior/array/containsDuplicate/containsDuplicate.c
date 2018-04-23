#include "containsDuplicate.h"
#define NULL ((void *)0)
//O(n*n)
int containsDuplicate(int* nums, int numsSize) {    
	int i,j;
	int temp = 0;
	if(nums == NULL || numsSize <= 0){
		return 0;
	}else if(numsSize == 1){
		return 0;
	}
	for(i = 0;i < numsSize; i++){
	temp = nums[i];
		for(j = i + 1;j < numsSize; j++){
			if(temp == nums[j]){
				return 1;
			}
		}
	}
	return 0;
}
// sort then travel O(n * log(n))
