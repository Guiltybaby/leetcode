#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
	int nums[] = {-1,0,1,2,-1,-4};
	int numsSize = sizeof(nums)/sizeof(nums[0]);
	int** ret = NULL;
	int retSize = 0;
	int i;
	ret = threeSum(&(nums[0]),numsSize,&retSize);
	if(ret){
		for(i = 0; i < retSize; i++){
			printf("ret[%d] = %d\t%d\t%d\n",i,ret[i][0],ret[i][1],ret[i][2]);
		}
	}else{
		printf("error ret = %d\n",ret);
	}
}


