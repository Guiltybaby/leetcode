
#ifndef NULL
#define NULL ((void *)0)
#endif
#ifndef null
#define null ((void *)0)
#endif
#include "time.h"

typedef struct {
	int* data;
	int* orgdata;
	int size;
} Solution;

Solution* solutionCreate(int* nums, int size) {
	Solution* sl = malloc(sizeof(Solution));
	sl->data = malloc(sizeof(int)*size);
	sl->orgdata = nums;
	sl->size = size;
	memcpy(sl->data,sl->orgdata,sizeof(int)*size);
	return sl;
}

/** Resets the array to its original configuration and return it. */
int* solutionReset(Solution* obj, int *returnSize) {
	Solution* sl = obj;
	memcpy(sl->data,sl->orgdata,sizeof(int)*sl->size);
	*returnSize = sl->size;
	return sl->data;
}

static void swap(int* a,int* b){
	int temp = *a;
	*a = *b;	
	*b = temp;
}
static int random(int n){
	return rand()%n;
}


/** Returns a random shuffling of the array. */
int* solutionShuffle(Solution* obj, int *returnSize) {
	srand(time(NULL));
	Solution* sl = obj;
	memcpy(sl->data,sl->orgdata,sizeof(int)*sl->size);
	*returnSize = sl->size;
	int i = 0;
	for(i = 0; i < sl->size; i++){
		swap(&((sl->data)[i]),&((sl->data)[random(sl->size)]));
	}

//TODO:random sl->data
	return sl->data;    
}

void solutionFree(Solution* obj) {
	Solution* sl = obj;
	if(sl->data)
	    free(sl->data);
	if(sl)
	    free(obj);
}

/**
 * Your Solution struct will be instantiated and called as such:
 * struct Solution* obj = solutionCreate(nums, size);
 * int* param_1 = solutionReset(obj);
 * int* param_2 = solutionShuffle(obj);
 * solutionFree(obj);
 */
