#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tree.h"

void main()
{
	int a[] = {0,1,2,3,4,5,6,7,8,9,10};

	TreeNode_t* root = sortedArrayToBST(a,sizeof(a)/sizeof(a[0]));


	int* colsize ;
	int retsize;
	int** res = levelOrder(root,&colsize,&retsize);
	int i,j;
	for(i = 0; i < retsize; i++){
			printf("colsize = %d xxx \t",colsize[i]);
		for(j = 0; j < colsize[i]; j++){
			printf("%d  ",res[i][j]);

		}
			printf("\n");
	}
}


