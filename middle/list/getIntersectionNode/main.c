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
	sLinkListNode* node = l1;
	while(node){
		printf("l1 = %d \n",node->val);
		node=node->next;
	}
	node = l2;
	while(node){
		printf("l2 = %d \n",node->val);
		node=node->next;
	}


	sLinkListNode* ret = getIntersectionNode(l1,NULL);
	
	if(ret){
		printf("ret = %d \n",ret->val);
	}else{
		printf("ret = NULL \n");
	}

	node = l1;
	while(node){
		printf("l1 = %d \n",node->val);
		node=node->next;
	}
	node = l2;
	while(node){
		printf("l2 = %d \n",node->val);
		node=node->next;
	}

	

}


