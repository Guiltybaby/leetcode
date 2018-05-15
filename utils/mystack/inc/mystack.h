#ifndef MICRO_STACK_H 
#define MICRO_STACK_H 

#include <stdlib.h> 

#define STACK(name) name##Stack_t

#define STACK_TEMPLATE(name,type) \
typedef struct STACK(name) \
{ 	\
	type *top; \
	type *bottom;	\
	int size; \
}name


#define STACK_INIT(stack,ssize) \
do{ \
	(stack) = malloc(sizeof(*stack)); \
	(stack)->size = ssize; \
	(stack)->bottom = malloc((stack)->size * sizeof(*((stack)->top))); \
	(stack)->top = (stack)->bottom - 1; \
}while(0)

#define STACK_IS_EMPTY(stack) \
((stack)->top > ((stack)->bottom)) 

#define STACK_GET_TOP(stack) \
((stack)->top) 

#define STACK_POP(stack,data) \
do{ \
	if((stack)->top < (stack)->bottom) break; \
	data = *((stack)->top); \
	(stack)->top--; \
}while(0) 

#define STACK_PUSH(stack,data) \
do{ \
	if((stack)->top == ((stack)->size + (stack)->bottom - 1)){ \
		(stack)->size = (stack)->size * 2; \
		(stack)->bottom = realloc((stack)->bottom,(stack)->size * sizeof(*((stack)->top))); \
		(stack)->top = (stack)->bottom + (stack)->size/2 - 1;}\
	(stack)->top++; \
	*((stack)->top) = data; \
}while(0) 

#define STACK_DEINIT(stack)\
do{ \
	free((stack)->bottom);\
 	free((stack)); \
}while(0)


#endif
