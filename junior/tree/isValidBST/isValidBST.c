#include "tree.h"
#ifndef NULL
#define NULL ((void *)0)
#endif
#ifndef null
#define null ((void *)0)
#endif

#define MAX_INT 2147483647
#define MIN_INT -2147483648


static inline int reIsValidNode(struct TreeNode* node,int* max, int* min){

	if(node == NULL){
		return 1;
	}
	if(max != NULL && node->val >= *max){
		return 0;
	}
    if(min != NULL && node->val <= *min){
		return 0;
	}
	return reIsValidNode(node->left,&(node->val),min) && reIsValidNode(node->right,max,&(node->val));
}

struct TreeNode* curr = NULL; 
//preoder travel tempa = min element
static int recursivTravelPrint(struct TreeNode* node){
	if(node == NULL)
		return 1;
	if(recursivTravelPrint(node->left) == 0)
	{
		return 0;
	}
	if(curr != NULL){
		if(curr->val >= node->val){
			return 0;
		}
	}
	curr = node;
	if(recursivTravelPrint(node->right) == 0)
	{
		return 0;
	}
	return 1;
}

int isValidBST(struct TreeNode* root) {
	curr = NULL;
	return recursivTravelPrint(root);
}
