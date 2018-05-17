
#ifndef NULL
#define NULL ((void *)0)
#endif
#ifndef null
#define null ((void *)0)
#endif
#include <stdio.h>


struct TreeLinkNode {
	int val;
	struct TreeLinkNode *left, *right, *next;
};

static void connectLevel(struct TreeLinkNode *head){
	if(head == NULL || head->left == NULL){
		return;
	}
	struct TreeLinkNode * node = head;
	while(node->next){
		node->left->next = node->right;
		node->right->next = node->next->left;
		node = node->next;
	}
	node->left->next = node->right;
	node->right = NULL;
	connectLevel(head->left);
}

static void connectLevel2(struct TreeLinkNode *node){
	if(node == NULL || node->left == NULL){
		return;
	}
	node->left->next = node->right;
	node->right->next = ((node->next == NULL)? NULL:node->next->left);
	connectLevel2(node->left);
	connectLevel2(node	->right);
}


void connect(struct TreeLinkNode *root) {
	if(root == NULL){
		return NULL;
	}
	root->next = NULL;
	connectLevel2(root);
}

