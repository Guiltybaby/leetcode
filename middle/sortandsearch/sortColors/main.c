#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void main()
{
	int nums[]={1,2,0,2,1,0,2,1,0,2,1,0,2,1,0,2};
	int size = sizeof(nums)/sizeof(nums[0]);
	sortColors(nums,size);
	int i;
	for(i = 0; i < size; i++){
		printf("%d\t",nums[i]);
	}
	printf("\n");
}


