
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

const char* map[8]={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void constructArray(char** result,char* digits, int* returnSize,int index){
	int len = strlen(digits + index);
	if(len <= 0){
		*returnSize = 1;
		return;
	}
	int size = 0;
	constructArray(result,digits,&size,index+1);
	const char* s = map[digits[index] - '2'];
	int msize;
	if(digits[index] == '7' || digits[index] == '9'){
		msize = 4;
	}else{
		msize = 3;
	}

	int i = 0,j = 0;
	for(i = 0; i < size; i++){
		for(j = 0; j < msize; j++){
			if(j != 0 && len > 0){
				memcpy(result[i + size*j] + index + 1,result[i] + index + 1,len - 1);
			}
			result[i + size*j][index] = s[j];
		}
	}	
	*returnSize = size*msize;
	
}

char** letterCombinations(char* digits, int* returnSize) {
		int i = 0;
	if(digits == NULL){
		return NULL;
	}
	int size = strlen(digits);
	if(size <= 0){
		char** ret = malloc(sizeof(char*));
		ret[0] = malloc(sizeof(char));
		ret[0][0] = '\0';
		*returnSize = 1;
		return ret;
	}
	int three = 0;
	int four = 0;
	for(i = 0; i < size; i++){
		if(digits[i] == '7' || digits[i] == '9'){
			four++;
		}else{
			three++;
		}
	}
	*returnSize = pow(3,three)*pow(4,four);


	*returnSize = (int)(pow(3,three)*pow(4,four));
	char** result = malloc(*returnSize * sizeof(char*));
	for(i = 0; i < *returnSize; i++){
		result[i] = calloc(sizeof(char),size + 1);
	}
	constructArray(result,digits,returnSize,0);
	return result;
}
