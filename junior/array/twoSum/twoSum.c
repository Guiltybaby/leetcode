
#ifndef NULL
#define NULL ((void *)0)
#endif
#ifndef null
#define null ((void *)0)
#endif

int* twoSum(int* nums, int numsSize, int target) {
	if(nums == NULL || numsSize < 2){
		return NULL;
	}
	int* result = (int*)malloc(sizeof(int) * 2);
	int* temp = (int*)malloc(sizeof(int) * numsSize);
	memset(result,0,sizeof(int) * 2);
	memcpy(temp,nums,sizeof(int) * numsSize);
	qsort(temp,0,numsSize-1,NULL);
	int j,i = 0;

	j = numsSize -1;
	i = 0;	
	while(j > i){
		if(temp[i] + temp[j] > target){
			j--;
		}else if (temp[i] + temp[j] < target){
			i++;
		}else{
			result[0] = temp[i];
			result[1] = temp[j];
			break;
		}
	}
	int find1 = 0;
	for(i = 0; i < numsSize; i++){
		if(nums[i] == result[0] && find1 == 0){
			result[0] = i;
			find1 = 1;
		}else if(nums[i] == result[1]){
			result[1] = i;
		}
	}


	free(temp);

	return result;
}


