#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sLinkList.h"

void main()
{
	sLinkListNode* head = LinkListNode();
	head->val = 5;
	LinkListInsert(head,0,1);
	LinkListInsert(head,0,2);
	LinkListInsert(head,0,3);
	LinkListInsert(head,0,4);
	sLinkListNode* node;
	node = head;
	while(node){
		printf("val = %d \n",node->val);
		node = node->next;
	}
	node = reverseList(head);
	int i = 5;
	while(i--){
		printf("val = %d \n",node->val);
		node = node->next;
	}

	LinkListDestroy(head);
}


