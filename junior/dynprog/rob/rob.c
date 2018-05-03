#include "tree.h"
#ifndef NULL
#define NULL ((void *)0)
#endif
#ifndef null
#define null ((void *)0)
#endif

#ifndef MAX((a),(b))
#define MAX(a,b) ((a)>(b)?(a):(b))
#endif

int maxRob(int* nums,int left,int right)
{
	if(left > right){
		return 0;
	}else if(left == right){
		return nums[left];
	}
	int r = nums[left] + maxRob(nums,left+2,right);
	int nr = maxRob(nums,left+1,right);
	return r > nr ? r : nr; 

}

int rob(int* nums, int numsSize) {
	if(nums == NULL || numsSize <= 0){
		return 0;
	}

	int i = 0;
	int pre = 0;
	int max = nums[0];
	int dp[2];	

	dp[0] = 0;
	dp[1] = nums[0];
	max = nums[0];
	for(i = 2; i <= numsSize; i++){
		max = MAX(dp[1],dp[0] + nums[i - 1]);
		dp[0] = dp[1];
		dp[1] = max;
	}
	return max;
}
