
#ifndef NULL
#define NULL ((void *)0)
#endif
#ifndef null
#define null ((void *)0)
#endif

#define MAX_INT 2147483647

int increasingTriplet(int* nums, int numsSize) {
	int i = 0;
	if(nums == NULL ||numsSize <= 2){
		return 0;
	}
	int min = MAX_INT;
	int mid = MAX_INT;

	for(i = 1; i < numsSize;i++){
		if(nums[i] <= min){
			min = nums[i];
		}else if(nums[i] <= mid){
			mid = nums[i];
		}else{
			return 1;
		}
	}
	return 0;
     
}


