#include "sLinkList.h"

#ifndef NULL
#define NULL ((void *)0)
#endif
#ifndef null
#define null ((void *)0)
#endif


struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
	struct ListNode* shead = head;
    struct ListNode** table = malloc(sizeof(struct ListNode*)*(n+1));
	memset(table,0,sizeof(struct ListNode*)*(n+1));
	int i = 0;
	table[0] = shead;
	while(shead->next != NULL){
		shead = shead->next;
		i++;
		table[i%(n+1)] = shead;
	}
	// no left element
	if(i == n - 1){
		if(n == 1){
			//no left & right element
			return NULL;
		}
		return table[(i+3)%(n+1)];
	}else if(n == 1){
		//no right element
		table[(i+1)%(n+1)]->next = NULL;
		return head;
	}

	//left=i+1 right=i+3 node = i+2
	table[(i+1)%(n+1)]->next = table[(i+3)%(n+1)];
	free(table[(i+2)%(n+1)]);
	free(table);
	return head;
}
