#include "sLinkList.h"

#ifndef NULL
#define NULL ((void *)0)
#endif
#ifndef null
#define null ((void *)0)
#endif


int hasCycle1(struct ListNode* head) {
	if(head == NULL){
		return 0;
	}
	if(head->next == NULL){
		return 0;
	}
	struct ListNode* node = head->next;
	struct ListNode* temp;
	while(node){
		printf("head = %p\n",head);
		printf("node = %p\n",node);
		if(node == head){
			return 1;
		}else if(node == NULL){
			return 0;
		}
		temp = node->next;
		node->next = head;
		node = temp;
	}
	return 0;
}



int hasCycle(struct ListNode* head) {
	if(head == NULL){
		return 0;
	}
	struct ListNode* fast = head;
	struct ListNode* slow = head;
	while(fast->next != NULL && fast->next->next != NULL){
		fast = fast->next->next;
		slow = slow->next;
		if(slow == fast){
			return 1;	
		}
	}
	return 0;
}
