#include "sLinkList.h"

#ifndef NULL
#define NULL ((void *)0)
#endif
#ifndef null
#define null ((void *)0)
#endif

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* p1 = l1;
    struct ListNode* p2 = l2;
    struct ListNode* head;
    struct ListNode* curr;
	if(p1 == NULL){
		return p2;
	}
	if(p2 == NULL){
		return p1;
	}
	if(p1->val > p2->val){
	    head = p2;
		p2=p2->next;
	}else{
	    head = p1;
		p1=p1->next;
	}
	curr = head;
	while(p1 != NULL && p2 != NULL){
		if(p1->val > p2->val){
			curr->next = p2;
			curr = curr->next;
			p2=p2->next;
		}else{
			curr->next = p1;
			curr = curr->next;
			p1=p1->next;
		}
	}
	if(p1 == NULL){
		curr->next = p2;
	}
	if(p2 == NULL){
		curr->next = p1;
	}
	return head;
}


