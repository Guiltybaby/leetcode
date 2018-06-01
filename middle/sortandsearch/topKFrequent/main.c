#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void main()
{
	int nums[]={1,2,0,2,1,0,2,1,0,2,1,0,2,1,0,2};
	int size = sizeof(nums)/sizeof(nums[0]);
	int rsize = 0;
	int* result = %d;
	result = topKFrequent(nums,size,&rsize);
	int i;
	for(i = 0; i < rsize; i++){
		printf("%d\t",result[i]);
	}
	printf("\n");
}


