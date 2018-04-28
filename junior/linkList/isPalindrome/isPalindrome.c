#include "sLinkList.h"

#ifndef NULL
#define NULL ((void *)0)
#endif
#ifndef null
#define null ((void *)0)
#endif


int isPalindrome(struct ListNode* head) {
	//count n
	struct ListNode* node = head;
	int ret = 0;
	if(node == NULL){
		return 1;
	}
	int count = 0;
	int leftend = 0;
	int rightbegin = 0;
	while(node != NULL){
		node= node->next;
		count++;
	}
	printf("count = %d \n",count);

	if(count == 1){
		return 1;
	}else if(count % 2 == 1){
		leftend = count / 2 - 1;
		rightbegin = count / 2 + 1;		
	}else{
		leftend = count / 2 - 1;
		rightbegin = count / 2;
	}
	struct ListNode* rnode = head;
	
	while(rightbegin-- > 0){
		rnode = rnode->next;
	}
	struct ListNode* lnode = head;
	struct ListNode* temp;;
	//reverse 0 - 2/n
	int i = 0;
	head = head->next;
	lnode->next = NULL;
	while(leftend-- > 0){
		temp = head->next;
		head->next = lnode;
		lnode = head;
		head = temp;
	}
	//compare 0-2/n & 2/n -n
	while(lnode){
	printf("lnode->val = %d \n",lnode->val);
	printf("rnode->val = %d \n",rnode->val);
		if(lnode->val != rnode->val){
			return 0;
		}
		lnode=lnode->next;
		rnode=rnode->next;
	}
 	return 1;
}
