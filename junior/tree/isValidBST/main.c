#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tree.h"

void main()
{
	TreeNode_t* root = TreeCreate();

	TravelPrint(root);
	printf("\n\n\n");

	int res = isValidBST(root);
	printf("%d \n",res);
}


