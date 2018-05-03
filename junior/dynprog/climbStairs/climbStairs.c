#include "tree.h"
#ifndef NULL
#define NULL ((void *)0)
#endif
#ifndef null
#define null ((void *)0)
#endif

int climbStairs(int n) {
	int i = 0;
	int result = 0;
	int temp1 = 1;
	int temp2 = 2;
	for(i = 0; i <= n; i++){
		if(i == 0){
			result = 0;
		}else if(i == 1){
			result = 1;
		}else if(i == 2){
			result = 2;
		}else{
			result = temp1 + temp2;
			temp1 = temp2;
			temp2 = result; 
		}
	}
	return result;
}
