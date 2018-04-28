#ifndef NULL
#define NULL ((void *)0)
#endif
#ifndef null
#define null ((void *)0)
#endif
#include "tree.h"

TreeNode_t* TreeCreate(){
	TreeNode_t* root = (TreeNode_t*)malloc(sizeof(TreeNode_t));
	root->val = 0;
	root->left = NULL;
	root->right = NULL;
	return root;
}


static void recursivDeleteNode(TreeNode_t* node){
	if(node->left){
		recursivDeleteNode(node->left);
	}
	if(node->right){
		recursivDeleteNode(node->right);
	}
	free(node);
}

void TreeDestroy(TreeNode_t* root){
	if(root){
		recursivDeleteNode(root);	
	}
}

static void recursivTravel(TreeNode_t* node){
	if(node->left){
		recursivTravel(node->left);
	}
	if(node->right){
		recursivTravel(node->right);
	}
	node->val = 0;
}

void TreeClear(TreeNode_t* root){
	if(root){
		recursivTravel(root);
	}
}

int TreeInsert(TreeNode_t* root,TreeDate data,int pos){
	int count = TreeCount(root);
	TreeNode_t* node = root;
	TreeNode_t* dataNode = malloc(sizeof(TreeNode_t));
	dataNode->val = data;
	dataNode->left = NULL;
	dataNode->right = NULL;
	do {
		if(pos%2){
			if(node->left){
				node=node->left;
			}else{
				node->left = dataNode;
				return 0;
			}
		}else{
			if(node->right){
				node=node->right;
			}else{
				node->right = dataNode;
				return 0;
			}
		}
	}while(pos=pos/2);
	return 1;
}

static int recursivTravelPrint(TreeNode_t* node){
	printf("node->val = %d\n",node->val);
	if(node->left){
		recursivTravelPrint(node->left);
	}
	if(node->right){
		recursivTravelPrint(node->right);
	}
}

void TravelPrint(TreeNode_t* root){
	if(root){
		recursivTravelPrint(root);
	}
}

TreeNode_t* TreeGet(TreeNode_t* root,int pos){

}

static int recursivTravelCount(TreeNode_t* node){
	int count = 0;
	if(node->left){
		count += recursivTravelCount(node->left);
	}
	if(node->right){
		count += recursivTravelCount(node->right);
	}
	return count+1;
}

int TreeCount(TreeNode_t* root){
	if(root){
		return recursivTravelCount(root);
	}else{
		return 0;
	}

}

static int recursivTravelDegree(TreeNode_t* node,int comp){
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

int TreeDegree(TreeNode_t* root){
	if(root){
		return recursivTravelDegree(root,1);
	}else{
		return 0;
	}

}

