
#ifndef NULL
#define NULL ((void *)0)
#endif
#ifndef null
#define null ((void *)0)
#endif
#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

static int count(struct TreeNode* root){
	if(root == NULL){
		return 0;
	}
	return (count(root->left) + count(root->right) + 1);
}

int kthSmallest(struct TreeNode* root, int k) {
	if(root == NULL){
		return 0;
	}

	int index = k;
	while(root){
		int cl = count(root->left);
		if(cl == index - 1){
			return root->val;
		}else if(cl > index - 1){
			root = root->left;
		}else{
			root = root->right;
			index = index - cl - 1;
		}
	}
	return 0;
}
