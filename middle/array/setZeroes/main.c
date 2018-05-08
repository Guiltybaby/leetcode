#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
	int nums[3][4] = {
	  {1,0,0,1},
	  {0,4,0,2},
	  {1,3,1,5}
	};
	int row = 3;
	int col = 4;
	int* ret[3];
	int i,j;
	for(i = 0; i < row;i++){
		ret[i] = &(nums[i][0]);
	}
	setZeroes(ret,row,col);
	int **matrix = ret;
	if(ret){
		for(i = 0; i < row; i++){
			for(j = 0; j < col; j++){
				printf("%d\t",matrix[i][j]);
			}
			printf("\n");
		}
	}else{
		printf("error ret = %d\n",ret);
	}
}


