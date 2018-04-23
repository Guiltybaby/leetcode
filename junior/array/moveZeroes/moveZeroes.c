#define NULL ((void *)0)
static void swap(int* a,int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void moveZeroes(int* nums, int numsSize) {
    if(moveZeroes == NULL || numsSize <=1){
		return;
	}
	int i = 0;
	int index = 0;
	for(i = 0; i < numsSize; i++){
		if(nums[i] != 0){
			if(nums[i] != nums[index]){
				swap(&nums[i],&nums[index]);
			}
			index++;
		}
	}
}
