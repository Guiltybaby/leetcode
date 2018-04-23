#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
	int nums[] = {1,2};
	int nums2[] = {1};
	int numsSize = sizeof(nums)/sizeof(nums[0]);
	int numsSize2 = sizeof(nums2)/sizeof(nums2[0]);
	int* sect = NULL;
	int size = 0;
	printf("111");
	sect = intersect(&(nums[0]),numsSize,&(nums2[0]),numsSize2,&size);
	printf("222");
	if(sect){
		int i = 0;
		printf("size = %d \n",size);
		for(i = 0;i < size;i++){
			printf("sect[%d] = %d \n",i,sect[i]);
		}
		free(sect);
	}else{
		printf("error \n");
	}
}


