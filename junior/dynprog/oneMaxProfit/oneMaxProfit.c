#include "tree.h"
#ifndef NULL
#define NULL ((void *)0)
#endif
#ifndef null
#define null ((void *)0)
#endif

int maxProfit(int* num,int size) {
	if(num == NULL || size <= 1){
		return 0;
	}
	int maxP = 0;
	int i = 0;
	int lowprc = num[0];
	int highprc = num[0];
	for(i = 0; i < size; i ++){
		if(num[i] > highprc){
			highprc = num[i];
		}else{
			//sold
			if(highprc - lowprc > maxP ){
				maxP = highprc - lowprc;
			}
			highprc = num[i];
		}
		if(num[i] <= lowprc){
			lowprc = num[i];
		}
	}
	//last sold
	if(highprc - lowprc > maxP ){
		maxP = highprc - lowprc;
	}

	return maxP;
}
