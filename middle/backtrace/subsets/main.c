#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
	int a[] = {1,2,3};
	int* columnSizes = NULL;
	int returnSize = 0;
	int** result = subsets(a,3,&columnSizes,&returnSize);
	int i = 0;
	printf("returnSize = %d \n",returnSize);
	for(i = 0; i < returnSize; i++){
		int j = 0;
		printf("columnSizes[i] = %d \n",columnSizes[i]);
		if(columnSizes[i] == 0){
			printf("NULL");
		}
		for(j = 0; j < columnSizes[i]; j++){
			printf("%d\t",result[i][j]);
		}
		printf("\n");
	}
}


