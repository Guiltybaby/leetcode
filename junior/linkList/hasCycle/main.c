#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sLinkList.h"

void main()
{	
	int ret = 0;
	sLinkListNode* head = LinkListNode();
	head->val = 5;
	LinkListInsert(head,0,5);
	LinkListInsert(head,0,4);
	LinkListInsert(head,0,3);
	LinkListInsert(head,0,4);
	sLinkListNode* node;
	node = head;

	while(node){
		printf("node->val = %d \n",node->val);
		node = node->next;
	}

	ret = hasCycle(head);
	if(ret){
		printf("hasCycle \n");		
	}else{
		printf("not hasCycle \n");
	}

//	LinkListDestroy(head);
}


