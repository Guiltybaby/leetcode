#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
	int* nums[8];
	int matrix[7][7] = {
		{1,2,3,4,5,6,7},
		{1,2,3,4,5,6,7},
		{1,2,3,4,5,6,7},
		{1,2,3,4,5,6,7},
		{1,2,3,4,5,6,7},
		{1,2,3,4,5,6,7},
		{1,2,3,4,5,6,7},
	};
	int numsSize = 7;
	int k = 1;
	int ret = 0;
	int j,i = 0;

printf("nums = %p\n",nums);
printf("nums[1] = %p\n",&nums[1]);
printf("nums[1][1] = %x\n",nums[1]);

	rotate(matrix,7,7); 	
printf("nums[1][1] = %x\n",nums[1]);
	if(!ret){
printf("numsSize =  %x\n",numsSize);
		for(i = 0; i< numsSize; i++){			
				for(j = 0; j< numsSize; j++){
				printf("%d ",matrix[i][j]);
			}
			printf("\n");
		}
	}else{
		printf("error ret = %d\n",ret);
	}
}


