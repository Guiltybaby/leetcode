
#ifndef NULL
#define NULL ((void *)0)
#endif
#ifndef null
#define null ((void *)0)
#endif

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <mystack.h>


STACK_TEMPLATE(stack,char*);

char** generateParenthesis2(int n, int* returnSize) {
	if(n == 0){
		*returnSize = 0;
		return NULL;
	}
	if(n == 1){
		char** strs = malloc(sizeof(char*));
		char* str = malloc(sizeof(char)*2 + 1);
		strs[0] = str;
		str[0] = '(';
		str[1] = ')';
		str[2] = '\0';
		*returnSize = 1;
		return strs;
	}
	stack* mystack;
	STACK_INIT(mystack,n*n);
	int size = 0;
	char** next = generateParenthesis2(n - 1,&size);
	int i = 0;
	for(i = 0; i < size; i++){
		char* str = next[i];
		int j = 0;
		int left = n-1;
		while(str[j] != '\0' && (left != 0)){
			if(str[j] == '('){
				char* temp = malloc(sizeof(char)*2*n + 1);
				memcpy(temp,str,j + 1);
				temp[j + 1] = '(';
				temp[j + 2] = ')';
				memcpy(temp + j + 3,str + j + 1, 2*(n-1) - j - 1);
				temp[2*n] = '\0';
				STACK_PUSH(mystack,temp);
			}
			j++;
			left--;
		}
		char* temp = malloc(sizeof(char)*2*n + 1);
		temp[0] = '(';
		temp[1] = ')';
		temp[2*n] = '\0';
		memcpy(temp + 2,str,2*(n-1));
		free(next[i]);
		STACK_PUSH(mystack,temp);
	}
	int mysize = STACK_DATA_SIZE(mystack);
	int rsize = 0;
	char** result = malloc(sizeof(char*)*mysize);
	while(!(STACK_IS_EMPTY(mystack))){
		char* str = NULL;
		STACK_POP(mystack,str);
		int i = 0;
		int same = 0;
		for(i = 0; i < rsize; i++){
			if(strcmp(str,result[i]) == 0){
				same = 1;
				free(str);
				break;
			}
		}
		if(!same){
			result[rsize] = str;
			rsize++;
		}
	}
	result = realloc(result,sizeof(char*)*rsize);
	*returnSize = rsize;
	STACK_DEINIT(mystack);
	return result;
}

void gen(int left,int right,char** result,int* returnSize,char* str,int n){
	if(left > right){
		return;
	}
	if(left == 0 && right == 0){
		char* temp = malloc(sizeof(char)*(n*2) + 1);
		memcpy(temp,str,2*n);
		temp[2*n] = '\0';
		result[*returnSize] = temp;
		*returnSize++;
	}
	if(left > 0){
		str[n*2 - left - right] = '(';
		gen(left - 1,right,result,returnSize,str,n);
	}
	if(right > 0){
		str[n*2 - left - right] = ')';
		gen(left,right - 1,result,returnSize,str,n);
	}
}

char** generateParenthesis(int n, int* returnSize) {
	char** result = malloc(sizeof(char*)*n);
	char* str = malloc(sizeof(char)*(n + n));
	gen(n,n,result,returnSize,str,n);
	free(str);
	return result;
}

