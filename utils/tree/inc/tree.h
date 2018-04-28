#ifndef __TREE_HEADER__
#define __TREE_HEADER__

typedef int TreeDate;

typedef struct TreeNode {
    TreeDate val;
    struct TreeNode *left;
    struct TreeNode *right;
}TreeNode_t;

TreeNode_t* TreeCreate();
void TreeDestroy(TreeNode_t* root);
void TreeClear(TreeNode_t* root);
int TreeInsert(TreeNode_t* root,TreeDate data,int pos);
TreeNode_t* TreeGet(TreeNode_t* root,int pos);
//TreeNode_t* TreeRoot();
int TreeCount(TreeNode_t* root);
int TreeDegree();
void TravelPrint(TreeNode_t* root);

#endif

