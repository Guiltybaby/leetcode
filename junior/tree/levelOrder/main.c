#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tree.h"

void main()
{
	TreeNode_t* root = TreeCreate();
	TreeInsert(root,1,1);
	TreeInsert(root,2,2);
	TreeInsert(root,3,3);
	TreeInsert(root,4,4);
	TreeInsert(root,5,5);
	TravelPrint(root);
	printf("-------------\n");

	int* colsize ;
	int retsize;
	int** res = levelOrder(root,&colsize,&retsize);
	int i,j;
	for(i = 0; i < retsize; i++){
			printf("colsize = %d xxx",colsize[i]);
		for(j = 0; j < colsize[i]; j++){
			printf("%d  ",res[i][j]);

		}
			printf("\n");
	}
}


