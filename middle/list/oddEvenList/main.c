#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sLinkList.h"

void main()
{
	sLinkListNode* l1 = LinkListNode();
	sLinkListNode* l2 = LinkListNode();

	l1->val = 1;
	LinkListInsert(l1,1,2);
	LinkListInsert(l1,2,3);
	LinkListInsert(l1,3,4);
	LinkListInsert(l1,4,5);

	sLinkListNode* ret = l1;
	while(ret){
		printf("ret = %d \n",ret->val);
		ret = ret->next;
	}

	ret = oddEvenList(l1);
	
	while(ret){
		printf("ret = %d \n",ret->val);
		ret = ret->next;
	}

	

}


