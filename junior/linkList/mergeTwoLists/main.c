#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sLinkList.h"

void main()
{
	sLinkListNode* head = LinkListNode();
	head->val = 0;
	LinkListInsert(head,0,4);
	LinkListInsert(head,0,3);
	LinkListInsert(head,0,2);
	LinkListInsert(head,0,1);


	sLinkListNode* head2 = LinkListNode();
	head2->val = -1;
	LinkListInsert(head2,0,6);
	LinkListInsert(head2,0,5);
	LinkListInsert(head2,0,4);
	LinkListInsert(head2,0,3);

	sLinkListNode* node;
	node = head;
	while(node){
		printf("head1 val = %d \n",node->val);
		node = node->next;
	}
	node = head2;
	while(node){
		printf("head2 val = %d \n",node->val);
		node = node->next;
	}
	node = mergeTwoLists(head,head2);
	while(node){
		printf("val = %d \n",node->val);
		node = node->next;
	}

	LinkListDestroy(head);
}


