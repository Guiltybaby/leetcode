#include <stdlib.h>
#include "sLinkList.h"

#ifndef NULL
#define NULL ((void *)0)
#endif
#ifndef null
#define null ((void *)0)
#endif

sLinkListNode* LinkListNode(){
	sLinkListNode* node = malloc(sizeof(sLinkListNode));
	if(node){
		node->val = 0;
		node->next = NULL;
		return node;
	}else{
		printf("mem alloc fail");
		return NULL;
	}
}

void LinkListDelete(sLinkListNode* head,int val)
{
	sLinkListNode* shead = head;
	while(shead->next != NULL){
		sLinkListNode* node = shead->next;
		if(node->val == val){
			shead->next = node->next;
			free(node);			
		}
		shead = shead->next;
	}
}

void LinkListDestroy(sLinkListNode* head){
	sLinkListNode* shead = head;
	while(head->next){
		sLinkListNode* node = head->next;
		head->next = head->next->next;
		free(node);
	}
	free(head);
}

sLinkListNode* LinkListInsert(sLinkListNode* head,int pos,int val){
	sLinkListNode* shead = head;
	sLinkListNode* node = LinkListNode();
	if(node == NULL){
		printf("mem alloc fail");
		return NULL;
	}
	node->val = val;
	int i = 0;
	for(i = 0; i < pos; i++){
		if(shead->next != NULL){
			shead = shead->next;
		}
	}
	node->next = shead->next;
	shead->next = node;
	return head;
}


