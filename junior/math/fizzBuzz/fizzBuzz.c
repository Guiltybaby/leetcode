#include "tree.h"
#ifndef NULL
#define NULL ((void *)0)
#endif
#ifndef null
#define null ((void *)0)
#endif
const char* fz = "Fizz";
const char* bz = "Buzz";
const char* fb = "FizzBuzz";
#define MAX_INT 2147483647
#define MAX_INT_STR_LEN 12

char* sfb(int n)
{
	char* str = malloc(MAX_INT_STR_LEN);
	memset(str,0,MAX_INT_STR_LEN);
	if(n % 3 == 0){
		if(n % 5 == 0){
			snprintf(str,MAX_INT_STR_LEN,"%s",fb);
		}else{
			snprintf(str,MAX_INT_STR_LEN,"%s",fz);
		}
		return str;
	}else if(n % 5 == 0){
		snprintf(str,MAX_INT_STR_LEN,"%s",bz);
		return str;
	}
	snprintf(str,MAX_INT_STR_LEN,"%d",n);
	return str;
}

char** fizzBuzz(int n, int* returnSize) {
	if(n <= 0 || returnSize == NULL){
		return NULL;
	}
    *returnSize = n;
	char** arrays = (char**)malloc(sizeof(char*)*n);
	int i;
	for(i = 0; i < n; i++){
		arrays[i] = sfb(i + 1);
	}
	return arrays;
}
