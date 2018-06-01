
#ifndef NULL
#define NULL ((void *)0)
#endif
#ifndef null
#define null ((void *)0)
#endif

int* topKFrequent(int* nums, int numsSize, int k, int* returnSize) {
	qsort(nums,0,numSize-1,NULL);
	int* map = malloc(sizeof(int)*numsSize);
	int* sizes = malloc(sizeof(int)*numsSize);
	memset(map,0,sizeof(int)*numsSize)
	memset(sizes,0,sizeof(int)*numsSize)
	int count = 0;
	int i = 0;
	for(i = 0; i < numsSize; i++){
		int c = nums[i];
		map[count] = nums[i];
		do{
			sizes[count]++;
			i++;
		}while(i < numsSize && c == nums[i]);
		count++;
	}
	int* result = malloc(sizeof(int)*count);
	int* ssizes = malloc(sizeof(int)*count);
	qsort(ssizes,0,count-1,NULL);
	for(i = 0; i < count;i++){
		if(ssizes[i])
		result[i]
	}
}


