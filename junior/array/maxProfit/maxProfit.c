#include "maxProfit.h"
#define NULL ((void *)0)


int maxProfit(int* prices, int pricesSize){
	int maxprofit = 0;
	int i = 0;
    if(prices == NULL || pricesSize <= 1){
        return 0;
    }	
	int lowprc = prices[0];
	int highprc = prices[0];
	int profit = 0;
	for(i = 0; i < pricesSize; i++){
		if(highprc < prices[i]){
			highprc = prices[i];
		}else{
			//sold in next time & reset price
			maxprofit += highprc - lowprc;
			highprc = prices[i];
			lowprc = prices[i];
		}
		if(lowprc > prices[i]){
			lowprc = prices[i];
			highprc = prices[i];
		}	
	}
	if(highprc > lowprc){
		//last sold
		maxprofit += highprc - lowprc;
	}
	return maxprofit;
}
