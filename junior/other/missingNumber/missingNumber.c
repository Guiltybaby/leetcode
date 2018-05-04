#ifndef NULL
#define NULL ((void *)0)
#endif
#ifndef null
#define null ((void *)0)
#endif

int missingNumber(int* nums, int numsSize) {
	int i = 0;
	int count = 0;
    for(i = 0; i < numsSize;i++){
		count^=i;
		count^=nums[i];
	}
	count ^=i;
	return count;
}
