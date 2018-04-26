#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sLinkList.h"

void main()
{
	sLinkListNode* head = LinkListNode();
	head->val = 0;
	LinkListInsert(head,0,1);
	sLinkListNode* node;
	node = head;
	while(node){
		printf("val = %d \n",node->val);
		node = node->next;
	}
	removeNthFromEnd(head,1);
	node = head;
	while(node){
		printf("val = %d \n",node->val);
		node = node->next;
	}
	LinkListDestroy(head);
}


