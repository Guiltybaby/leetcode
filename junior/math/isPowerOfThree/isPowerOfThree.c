#include "tree.h"
#ifndef NULL
#define NULL ((void *)0)
#endif
#ifndef null
#define null ((void *)0)
#endif

int isPowerOfThree(int n) {
	int b;
	if(n <= 0){
		return 0;
	}
	if(n == 1){
		return 1;
	}
    while(n > 1){
		b = n%3;
		n = n/3;
		if(b != 0){
			return 0;		
		}
	}
	return 1;
}
