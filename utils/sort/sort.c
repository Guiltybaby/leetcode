
static void swap(int* a,int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bsort(int* nums, int numsSize,int (*comp)(const int,const int)) {
	int i,j;
	for( i = 0; i < numsSize; i++){
		for(j = i; j < numsSize; j++){
			if((*comp)(nums[i],nums[j]) > 0){
				swap(&nums[i],&nums[j]);
			}
		}
	}
}

int partition(int *nums,int left,int right,int (*comp)(const int,const int)){
	int privot = nums[right];
	int tail = 	left - 1;
	int i;
	for(i = left; i < right; i++){
		if((*comp)(nums[i], privot) == 0){
			swap(&nums[++tail],&nums[i]);
		}
	}
	swap(&nums[tail + 1],&nums[right]);
	return tail + 1;
}



void qsort(int* nums, int left,int right,int (*comp)(const int,const int)){
	if (left >= right)
		return;
	int pivot_index =  partition(nums,left,right,comp);
	qsort(nums,left,pivot_index -1,comp);
	qsort(nums,pivot_index + 1,right,comp);
}


