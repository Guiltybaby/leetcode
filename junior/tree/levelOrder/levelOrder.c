#include "tree.h"
#ifndef NULL
#define NULL ((void *)0)
#endif
#ifndef null
#define null ((void *)0)
#endif



static int recursivTravelDegree(struct TreeNode* node,int comp){
	int left = 1;
	int right = 1;
	if(node->left){
		left += recursivTravelDegree(node->left,comp);
	}
	if(node->right){
		right += recursivTravelDegree(node->right,comp);
	}
	if(comp)
		return left>right?left:right;
	else
		return left>right?left:right;

}

static int MyTreeDegree(struct TreeNode* root){
	if(root){
		return recursivTravelDegree(root,1);
	}else{
		return 0;
	}

}


int** levelOrder(struct TreeNode* root, int** columnSizes, int* returnSize) {
	if(root == NULL || returnSize == NULL || columnSizes == NULL){
		return NULL;
	}
    int maxDepth = MyTreeDegree(root);
	*returnSize = maxDepth;

	int** array = (int**)malloc(sizeof(int*)*maxDepth);
	if(array == NULL){
		printf("error mem \n");
		return NULL;
	}
	int** arrays = array;

	int* columnSize = (int*)malloc(sizeof(int)*maxDepth);
	if(columnSize == NULL){
		printf("error mem \n");
		return NULL;
	}
	*columnSizes = columnSize;

	int size = 1;
	int i;
	struct TreeNode** nodeCol = (struct TreeNode**)malloc(sizeof(struct TreeNode*)*size);
	struct TreeNode** nodeColt = (struct TreeNode**)malloc(sizeof(struct TreeNode*)*size*2);
	if(nodeCol == NULL){
		printf("error mem \n");
		return NULL;
	}
	if(nodeColt == NULL){
		printf("error mem \n");
		return NULL;
	}
	*nodeCol = root;
	do{
		int len = 0;
		int* dataCol = (int*)malloc(sizeof(int)*size);
		nodeColt = (struct TreeNode**)realloc(nodeColt,sizeof(struct TreeNode*)*size*2);
		nodeCol = (struct TreeNode**)realloc(nodeCol,sizeof(struct TreeNode*)*size*2);
		if(dataCol == NULL){
			printf("error mem \n");
			break;
		}
		*array = dataCol;
		array++;
		struct TreeNode** nodet = nodeColt;
		for(i = 0; i < size; i++){
			struct TreeNode* node = *(nodeCol+i);
			dataCol[i] = node->val;

			if(node->left){
				*nodet = node->left;
				nodet++;
				len++;
			}
			if(node->right){
				*nodet = node->right;
				nodet++;
				len++;
			}
		}
		*columnSize = size;
		columnSize++;
		size = len;
		memcpy(nodeCol,nodeColt,sizeof(struct TreeNode*)*size);
	}while(size);
	free(nodeCol);
	free(nodeColt);
	return arrays;
}
