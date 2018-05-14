
#ifndef NULL
#define NULL ((void *)0)
#endif
#ifndef null
#define null ((void *)0)
#endif
#include "sLinkList.h"


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
	int carry = 0;
	struct ListNode* head = NULL;
	if(l1 == NULL){
		return l2;
	}else if (l2 == NULL){
		return l1;
	}
	struct ListNode* prev = NULL;
	while(l1 || l2){
		struct ListNode* node = malloc(sizeof(struct ListNode));
		int sum = 0;
		if(l1 && l2){
			sum = l1->val + l2->val + carry;
			l1 = l1->next;
			l2 = l2->next;
		}else if(l1){
			struct ListNode* node = malloc(sizeof(struct ListNode));
			sum = l1->val + carry;
			l1 = l1->next;
		}else{
			struct ListNode* node = malloc(sizeof(struct ListNode));
			sum = l2->val + carry;
			node->next = NULL;
			l2 = l2->next;
		}
		node->val = sum%10;
		node->next = NULL;
		carry = sum/10;
		if(prev == NULL){
			prev = node;
			head = node;
		}else{
			prev->next = node;
			prev = node;
		}
	}
	if(carry){
		struct ListNode* node = malloc(sizeof(struct ListNode));
		node->val = carry;
		node->next = NULL;
		prev->next = node;
	}
	return head;
}

