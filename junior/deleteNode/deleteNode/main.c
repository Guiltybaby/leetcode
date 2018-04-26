#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sLinkList.h"

void main()
{
	sLinkListNode* head = LinkListNode();
	head->val = 0xffffffff;
	LinkListInsert(head,0,1);
	LinkListInsert(head,0,2);
	LinkListInsert(head,0,3);
	LinkListInsert(head,0,4);
	sLinkListNode* node;
	node = head;
	while(node->next){
		node = node->next;
		printf("val = %d \n",node->val);
	}
	deleteNode(head->next->next);
	node = head;
	while(node->next){
		node = node->next;
		printf("val = %d \n",node->val);
	}

	LinkListDestroy(head);
}


