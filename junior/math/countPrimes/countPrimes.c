#include "tree.h"
#ifndef NULL
#define NULL ((void *)0)
#endif
#ifndef null
#define null ((void *)0)
#endif

int jugePrime(int num){
	int i = 0;
	for(i = 2; i < num; i++){
		if(num%i == 0){
			return 0;
		}
	}
	return 1;
}

int countPrimes(int n) {
	if(n <= 1){
		return 0;
	}
	int j,i = 0;
	int count = 0;
	char* array = malloc(sizeof(char)*n);
	memset(array,0,sizeof(char)*n);

	for(i = 2; i < n; i++){
		for(j = 2; j*i < n; j++){
			if(array[i*j] == 0)
				array[i*j] = 1;
		}
	}
	for(i = 2; i < n; i++){
//		printf("array[%d] = %d \n",i,array[i]);
		if(array[i] == 0) count++;
	}
	free(array);
	return count;
}
