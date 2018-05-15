
#ifndef NULL
#define NULL ((void *)0)
#endif
#ifndef null
#define null ((void *)0)
#endif
#include "sLinkList.h"

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


struct ListNode *getIntersectionNode2(struct ListNode *headA, struct ListNode *headB) {
	int lenac = 0;
	int lenbc = 0;
	int lenc = 0;
	int lenab = 0;
	struct ListNode * node = headA;
	while(node){
		lenac++;
		node = node->next;
	}
	printf("111 \n");
	node = headB;
	while(node){
		lenbc++;
		node = node->next;
	}
	//reverse A
	node = headA;
	struct ListNode* tailA = reverseList2(headA);
	printf("222 \n");
	node = headB;
	while(node){
		lenab++;
		node = node->next;		
	}
	//reverse A
	reverseList2(tailA);
	lenc = (lenac + lenbc - lenab + 1)/2;
	int lena = lenac - lenc;
	int lenb = lenbc - lenc;
	while(lena-- > 0){
		headA=headA->next;
	}
	printf("lenb = %d\n",lenb);
	while(lenb-- > 0){
		headB=headB->next;
	}
	if(headA == headB){
		return headA;
	}

	return NULL;
}

struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
	int lenac = 0;
	int lenbc = 0;
	struct ListNode * node = headA;
	while(node){
		lenac++;
		node = node->next;
	}
	node = headB;
	while(node){
		lenbc++;
		node = node->next;
	}
	int i = 0;
	if(lenac > lenbc){
		int diff = lenac - lenbc;
		for(i = 0; i < diff; i ++){
			headA = headA->next;
		}
	}else{
		int diff = lenbc - lenac;
		for(i = 0; i < diff; i ++){
			headB = headB->next;
		}
	}
	while(headA && headB){
		if(headA == headB){
			return headA;
		}
		headA = headA->next;
		headB = headB->next;
	}
	return NULL;
}

