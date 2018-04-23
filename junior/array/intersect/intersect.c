
#ifndef NULL
#define NULL ((void *)0)
#endif
#ifndef null
#define null ((void *)0)
#endif


int comp(int a,int b){
	return (a <= b ? 0 : 1);
}

int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
	if(nums1 == NULL || nums1Size <= 0 || nums2 == NULL || nums2Size <=0 || returnSize == NULL){
		return NULL;	
	}
	if(nums1Size > 1){
	    qsort(nums1,0,nums1Size-1,comp);
	}
	if(nums2Size > 1){
	    qsort(nums2,0,nums2Size-1,comp);
	}
	int i;
	for (i = 0; i < nums1Size; i++){
		printf("nums1[%d] = %d \n",i,nums1[i]);

	}
	for (i = 0; i < nums2Size; i++){
		printf("nums2[%d] = %d \n",i,nums2[i]);

	}
	int maxSize = nums1Size > nums2Size ? nums2Size:nums1Size;
	int* sect = (int *)malloc(maxSize * sizeof(int));
	int index1 = 0;
	int index2 = 0;
	while(1){
		if(nums1[index1] > nums2[index2]){
			index2++;
		}else if(nums1[index1] < nums2[index2]){
			index1++;
		}else{
			sect[*returnSize] = nums1[index1];
			(*returnSize)++;
			index2++;
			index1++;
		}
		if(index1 >= nums1Size || index2 >= nums2Size){
			break;
		}
	}
	return sect;
}




