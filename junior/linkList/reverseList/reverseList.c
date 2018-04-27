#include "sLinkList.h"

#ifndef NULL
#define NULL ((void *)0)
#endif
#ifndef null
#define null ((void *)0)
#endif

struct ListNode* reverseList2(struct ListNode* head) {
	struct ListNode* temp;
	struct ListNode* node;;
	if(head == NULL){
		return NULL;
	}
	node = head;
	if(head->next == NULL){
		return head;
	}
	head = head->next;
	node->next = NULL;
	while(head){
		temp = head->next;
		head->next = node;
		node = head;
		head = temp;
	}
	return node;
}

static struct ListNode* RecursiveReverseList(struct ListNode* head) {
	struct 	ListNode* listHead = NULL;
	struct ListNode* node;
	if(head->next == NULL){
		listHead = head;
		return head;
	}
	listHead = RecursiveReverseList(head->next);
	head->next->next = head;
	return listHead;
}

struct ListNode* reverseList(struct ListNode* head) {
	struct 	ListNode* listHead = NULL;
	if(head == NULL){
		return NULL;
	}
	if(head->next == NULL){
		return head;
	}
	listHead = RecursiveReverseList(head->next);
	head->next->next = head;
	head->next = NULL;
	return listHead;
}


