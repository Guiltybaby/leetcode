#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{

	int n = 5;
	int* size;
	int** res = generate(n,&size);
	int i,j;
	for(i = 0; i< n; i++){
		for(j = 0; j < size[i]; j++){
			printf("%d\t",res[i][j]);	
		}
		printf("\n");
	}
	printf("end \n");
}


