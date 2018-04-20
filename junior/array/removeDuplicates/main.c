#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "removeDuplicates.h"

void main()
{
	int numArray[] = {1,2,3,4,4,5,5,6,6};
	int i = 0;
	int len = removeDuplicates(&numArray,sizeof(numArray));
	if(len > 0){
		printf("removeDuplicates numArray len = %d \n",len);
		for(i = 0; i < len; i++){
			printf("numArray[%d] = %d \n",i,numArray[i]);
		}
	}else{
		printf("error \n");
	}
}


