#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "maxProfit.h"

void main()
{
	int prices[] = {7,1,5,3,6,4};
	int maxprofit = maxProfit(&(prices[0]),sizeof(prices)/sizeof(prices[0]));
	if(maxprofit >= 0){
		printf("maxprofit = %d \n",maxprofit);
	}else{
		printf("error maxprofit = %d\n",maxprofit);
	}
}


