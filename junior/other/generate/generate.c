#ifndef NULL
#define NULL ((void *)0)
#endif
#ifndef null
#define null ((void *)0)
#endif

int* getNextRow(int* array,int size){
	int* col = malloc(sizeof(int)*(size+1));
	if(array == NULL){
		col[0] = 1;
		return col;
	}
	col[0] = array[0];
	col[size] = array[0];
	int i;
	for(i = 1;i < size; i ++){
		col[i] = array[i - 1] + array[i];
	}
	return col;
}


int** generate(int numRows, int** columnSizes) {
	int j,i = 0;
	int** array = malloc(sizeof(int*)*numRows);
	int* size = malloc(sizeof(int)*numRows);
	array[0] = getNextRow(NULL,0);
	size[0] = 1;
    for(i = 1; i < numRows; i++){
		array[i] = getNextRow(array[i-1],size[i - 1]);
		size[i] = i + 1;
	}
	*columnSizes = size;
	return array;
}
