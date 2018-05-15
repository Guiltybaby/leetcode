
#include "mystack.h"
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
};

STACK_TEMPLATE(stack,struct TreeNode);

void mystacktest(){
	stack* s;
	int size = 100;
	STACK_INIT(s,size);
	struct TreeNode a = {1,0,0};
	struct TreeNode b = {0,0,0};
	STACK_PUSH(s,a);
	STACK_POP(s,b);
	STACK_DEINIT(s);
}


