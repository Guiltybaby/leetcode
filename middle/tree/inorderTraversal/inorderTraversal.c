
#ifndef NULL
#define NULL ((void *)0)
#endif
#ifndef null
#define null ((void *)0)
#endif
#include <stdio.h>
#include "tree.h"
#include "mystack.h"


//	STACK_PUSH(s,&a);
//	STACK_POP(s,&b);
//	STACK_DEINIT(s);

STACK_TEMPLATE(stack,struct TreeNode*);


int* inorderTraversal(struct TreeNode* root, int* returnSize) {
	stack* s;
	int stacksize = 100;
	STACK_INIT(s,stacksize);
	struct TreeNode* node = root;
	int size = 0;
	int step = 1000;
	int* result = malloc(sizeof(int)*step);
	printf("empty = %d\n",STACK_IS_EMPTY(s));
	while(node || STACK_IS_EMPTY(s)){
		while(node){
			STACK_PUSH(s,node);
			node = node->left;
		}
		STACK_POP(s,node);
		if(size >= 1000){
			step*=2;
			result = realloc(result,sizeof(int)*step);
		}
		result[size] = node->val;
		size++;
		node = node->right;
	}
	return result;
}

int* preorderTraversal(struct TreeNode* root, int* returnSize) {
	stack* s;
	int size = 100;
	STACK_INIT(s,size);
	struct TreeNode* node = root;

	while(node || STACK_IS_EMPTY(s)){
		while(node){
		printf("node->val = %d,",node->val);
			STACK_PUSH(s,node);
			node = node->left;
		}
		STACK_POP(s,node);
		node = node->right;
	}
}

