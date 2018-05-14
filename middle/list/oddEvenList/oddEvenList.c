
#ifndef NULL
#define NULL ((void *)0)
#endif
#ifndef null
#define null ((void *)0)
#endif
#include "sLinkList.h"


struct ListNode* oddEvenList(struct ListNode* head) {
	if(head == NULL){
		return NULL;
	}
	struct ListNode* oddhead = head;
	struct ListNode* evenhead = head->next;
	struct ListNode* oddcurr = NULL;
	struct ListNode* evencurr = NULL;
	int flag = 1;
	while(head){
		if(flag){
			if(oddcurr){
				oddcurr->next=head;
			}
			oddcurr = head;
		}else{
			if(evencurr){
				evencurr->next=head;
			}
			evencurr = head;
		}
		flag=!flag;
		head = head->next;
	}
	oddcurr->next = evenhead;
	if(evencurr)
		evencurr->next = NULL;
	return oddhead;
}
