#include "tree.h"
#ifndef NULL
#define NULL ((void *)0)
#endif
#ifndef null
#define null ((void *)0)
#endif

int maxSubArray(int* nums, int numsSize) {
    if(nums == NULL || numsSize <= 0){
		return 0;
	}
	int i,max = nums[0];
	int sum = nums[0];
	for(i = 1; i < numsSize; i++){
		if(sum < 0){
			sum = 0;
		}
		sum+=nums[i];
		if(max < sum){
			max = sum;
		}
	}
	return max;
}
