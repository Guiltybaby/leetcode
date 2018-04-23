#define NULL ((void *)0)

int* plusOne(int* digits, int digitsSize, int* returnSize) {
	int* output;
	int i = 0;
	if(digits == NULL || digitsSize <=0){
		return NULL;
	}
	for(i = 0; i < digitsSize; i++){
		if(digits[i] != 9){
			break;
		}		
	}
	*returnSize = (i == digitsSize ? digitsSize + 1:digitsSize);
	output = (int*)malloc(*returnSize*sizeof(int));
	if(i == digitsSize){
	memset(output,0,*returnSize*sizeof(int));
		output[0] = 1;
		return output; 
	}
	int c = 1;
	int index = *returnSize - 1;
	do {
		output[index] = (digits[index] + c) % 10;
		c = (digits[index] + c) / 10;
		if(!c){
			for(i = 0;i < index; i++){
				output[i] = digits[i];
			}
			break;
		}
	}while(--index >= 0);
	
	return output;
}
