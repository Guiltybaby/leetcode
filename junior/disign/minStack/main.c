#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tree.h"

void main()
{
	int param_4;
	int param_3;
	struct MinStack* obj = minStackCreate(100);

	minStackPush(obj, -2);
#if 1
	minStackPush(obj, 0);
	minStackPush(obj, -3);
	minStackPush(obj, -3);

	param_4 = minStackGetMin(obj);
	printf("param_4 = %d \n",param_4);
	minStackPop(obj);
	param_3 = minStackTop(obj);
	printf("top_3 = %d \n",param_3);

	param_4 = minStackGetMin(obj);
	printf("param_4 = %d \n",param_4);
	minStackFree(obj);
#endif
}


