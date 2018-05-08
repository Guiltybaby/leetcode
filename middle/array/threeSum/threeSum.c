
#ifndef NULL
#define NULL ((void *)0)
#endif
#ifndef null
#define null ((void *)0)
#endif
/**
 * Return an array of arrays of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */

int** threeSum(int* nums, int numsSize, int* returnSize) {
	if(nums == NULL || returnSize == NULL){
		return NULL;
	}
	int* numsT = malloc(sizeof(int)*numsSize);
	if(!numsT){
		printf("error mem!!!!\n");		
	}
	memcpy(numsT,nums,sizeof(int)*numsSize);

	qsort(numsT,0,numsSize-1,NULL);
	int left,right;
	int size = 0;
	int i = 0;
	int** result=(int**)malloc(sizeof(int*)*(numsSize*(numsSize-1)*(numsSize-2))/6);
	if(!result){
		printf("error mem!!!!\n");
		free(numsT);
		return NULL;
	}
	for(i = 0; i< numsSize; i++){
		left = i + 1;
		right = numsSize-1;
		if(numsT[i] > 0){
			break;
		}
		while(left<right){
			int sum = numsT[i] + numsT[left] + numsT[right];
			if(sum > 0){
				right--;						
			}else if(sum < 0){
				left++;
			}else{
				//SAVE numsT[i] + numsT[left] + numsT[right];
				int j = 0;
				int same = 0;
				for(j = size - 1; j >= 0; j--){
					if(numsT[i] > result[j][0]){
						break;
					}
					if(numsT[i] == result[j][0] && numsT[left] == result[j][1] && numsT[right] == result[j][2]){
						same = 1;
						break;
					}
				}
				if(same){
					left++;
					right--;
					continue;
				}
				size++;

				int* data = (int*)malloc(3*(sizeof(int)));
				if(!data){
					printf("error mem!!!!\n");
					free(numsT);
					return NULL;
				}
				data[0] = numsT[i];
				data[1] = numsT[left];
				data[2] = numsT[right];
				left++;
				right--;
				result[size - 1] = data;
//				printf("a = %d b = %d c = %d data = %p\n",data[0],data[1],data[2],result);
			}
		}
	}
	free(numsT);
	*returnSize = size;
	return result;
}



