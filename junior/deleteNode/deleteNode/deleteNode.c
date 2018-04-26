#include "sLinkList.h"

#ifndef NULL
#define NULL ((void *)0)
#endif
#ifndef null
#define null ((void *)0)
#endif


void deleteNode(struct ListNode* node) {
    struct ListNode* tmp = node;
	if(tmp->next != NULL){
	tmp->val = tmp->next->val;
	tmp->next = tmp->next->next
	}
	return;
}
