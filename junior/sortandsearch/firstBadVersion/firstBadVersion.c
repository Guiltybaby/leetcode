#include "tree.h"
#ifndef NULL
#define NULL ((void *)0)
#endif
#ifndef null
#define null ((void *)0)
#endif

#define MAX_INT 2147483647
#define MIN_INT -2147483648

//2126753390 2147483647 versions
//1702766719 is the first bad version.
int isBadVersion(int version){
	if(version >= 1702766719){
		return 1;
	}else{
		return 0;
	}
}

int firstBadVersion(int n) {
	int left = 0;
	int right = n;
    while(right - left > 1){
		if(isBadVersion(left + (right - left)/2)){
			right = left + (right - left)/2;
		}else{
			left = left + (right - left)/2;
		}
	}
	return right;
}
