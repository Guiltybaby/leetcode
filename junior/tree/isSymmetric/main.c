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

	int res = isSymmetric(root);
	printf("%d \n",res);
}


