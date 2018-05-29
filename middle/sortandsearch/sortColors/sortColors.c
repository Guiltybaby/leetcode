
#ifndef NULL
#define NULL ((void *)0)
#endif
#ifndef null
#define null ((void *)0)
#endif

void sortColors(int* nums, int numsSize) {
    int left = 0;
	int right = numsSize - 1;
	int i = 0;
//	int count = 0;
	while(i <= right){
//count++;
//printf("count = %d size = %d\n",count,numsSize);
		if(nums[i] == 0){
			nums[i] = nums[left];
			nums[left] = 0;
			while(nums[left] == 0 && left < numsSize){
				left++;
			}
			if(i < left){
				i = left;
			}
		}else if(nums[i] == 2){
			nums[i] = nums[right];
			nums[right] = 2;
			while(nums[right] == 2 && right >= 0){
				right--;
			}
		}else{
			i++;			
		}
	}
}


