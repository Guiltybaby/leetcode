#ifndef __S_LINK_LIST_HEADER__
#define __S_LINK_LIST_HEADER__
typedef struct ListNode {
    int val;
    struct ListNode *next;
}sLinkListNode;

sLinkListNode* LinkListNode();
void LinkListDelete(sLinkListNode* head,int val);
sLinkListNode* LinkListInsert(sLinkListNode* head,int pos,int val);
void LinkListDestroy(sLinkListNode* head);

#endif

