#include "tree.h"
#ifndef NULL
#define NULL ((void *)0)
#endif
#ifndef null
#define null ((void *)0)
#endif

int maxDepth(struct TreeNode* root) {
    return TreeDegree(root);
}
