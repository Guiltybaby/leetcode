typedef struct {
    int* data;
	int* top;
	int min;
} MinStack;

#define MAX_INT 2147483647

/** initialize your data structure here. */
MinStack* minStackCreate(int maxSize) {
    MinStack* stack = malloc(sizeof(MinStack));
    stack->data = malloc(sizeof(int)*maxSize);
	stack->top = stack->data - 1;
	stack->min	 = MAX_INT;
	return stack;
}

void relocateMin(MinStack* obj){
    MinStack* stack = obj;
	int i = 0;
	int max = ((long)stack->top - (long)stack->data)/sizeof(int) + 1;
	printf("max = %d \n",max);
	int min = stack->data[0];
	for(i = 0; i < max;i++){
		if(stack->data[i] < min){
			min = stack->data[i];
		}
	}
	stack->min = min;
}

void minStackPush(MinStack* obj, int x) {
    MinStack* stack = obj;
	stack->top++;
	*(stack->top) = x;
	if(stack->min > x){
		stack->min = x;
	}
}

void minStackPop(MinStack* obj) {
    MinStack* stack = obj;
	int data = *(stack->top);
	stack->top--;
	//empty stack
	if((long)stack->top < (long)stack->data){
		stack->min = MAX_INT;
	}else if(data == stack->min){
		relocateMin(stack);
	}
}

int minStackTop(MinStack* obj) {
    MinStack* stack = obj;
    int top = *(stack->top);
	return top;
}

int minStackGetMin(MinStack* obj) {
    MinStack* stack = obj;
	return stack->min;   
}

void minStackFree(MinStack* obj) {
    MinStack* stack = obj;
	if(stack->data)
		free(stack->data);
	if(stack)
		free(stack);
}

