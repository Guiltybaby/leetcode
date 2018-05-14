#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sLinkList.h"

void main()
{
	sLinkListNode* l1 = LinkListNode();
	sLinkListNode* l2 = LinkListNode();

	l1->val = 1;
	LinkListInsert(l2,1,8);

	l2->val = 0;


	sLinkListNode* ret = addTwoNumbers(l1,l2);
	
	while(ret){
		printf("ret = %d \n",ret->val);
		ret = ret->next;
	}

	

}


