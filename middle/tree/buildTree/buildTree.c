
#ifndef NULL
#define NULL ((void *)0)
#endif
#ifndef null
#define null ((void *)0)
#endif
#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

struct TreeNode* build(int* pre,int* in, int size){
	if(size == 0){
		return NULL;
	}
	struct TreeNode*node = malloc(sizeof(struct TreeNode));
	if(size == 1){
		node->val = pre[0];
		node->left = NULL;
		node->right = NULL;
		return node;
	}
	node->val = pre[0];
	int i = 0;
	for(i = 0; i < size; i++){
		if(pre[0] == in[i]){
			node->left = build(pre + 1,in,i);
			node->right = build(pre + i + 1,in + i + 1,size - i - 1);
		}
	}
	return node;
}

struct TreeNode* buildTree(int* preorder, int preorderSize, int* inorder, int inorderSize) {
	if(preorder == NULL || inorder == NULL || preorderSize != inorderSize || preorderSize <= 0){
		return NULL;
	}
	struct TreeNode* root = build(preorder,inorder,preorderSize);
	return root;
}
