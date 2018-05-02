#include "tree.h"
#ifndef NULL
#define NULL ((void *)0)
#endif
#ifndef null
#define null ((void *)0)
#endif

int same(struct TreeNode* left,struct TreeNode* right){
	if(left == NULL){
		if(right != NULL){
			return 0;
		}else{
			return 1;
		}
	}else if(right == NULL){
		return 0;
	}
	if(left->val != right->val){
		return 0;
	}
	return same(left->left,right->right) && same(left->right,right->left);
}


int isSymmetric(struct TreeNode* root) {
	if(root == NULL){
		return 1;
	}
	if(root->left == NULL){
		if(root->right != NULL){
			return 0;
		}else{
			return 1;
		}
	}else if(root->right == NULL){
			return 0;
	}
	if(root->left->val != root->right->val){
		return 0;
	}
	return same(root->left,root->right);	
}
