#include "rotate.h"
#define NULL ((void *)0)

//O(n)
//need to prove traverse nums whole collection
void rotaten(int* nums, int numsSize, int k) {    
	int i = 0;
	int index = 0;
	int indexNum = 0;
    if(nums == NULL || numsSize <= 1 || k == 0){
        return;
    }	
	k = k % numsSize;
	if(k < 0){
		k += numsSize;
	}
	indexNum = nums[0];
	int distance = 0;
	for(i = 0; i < numsSize; i++){
		index = (k + index)%numsSize;
		int temp = nums[index];
		nums[index] = indexNum;
		indexNum = temp;
		if((distance += k) % numsSize == 0){
			index++;
			indexNum = nums[index];
		}
	}

}

//O(N^2)
void rotatenn(int* nums, int numsSize, int k) {    
	int j = 0,i = 0;
    if(nums == NULL || numsSize <= 1 || k == 0){
        return;
    }	
	k = k % numsSize;
	if(k < 0){
		k += numsSize;
	}
	for(j = 0; j < k; j++){
		int indexNum = nums[0];
		for(i = 0; i < numsSize; i++){
			int index = 0;
			int temp = 0;
			index = (i + 1)%numsSize;
			temp = nums[index];
			nums[index] = indexNum;
			indexNum = temp;
		}
	}
}


//O(N)
//y = (x + k) % n
//y = x + k; x + k < n
//y = x + k - n; x +k > n
//y = n - (n-k-x); (x < n - k)
//y = k - (n - x);   (x > n - k)

void reverse(int *array,int len){
	int i = 0;
	for(i = 0; i < len/2; i++){
		int temp = array[i];
		array[i] = array[len-1-i];
		array[len-1-i] = temp;
	}
}

void rotate(int* nums, int numsSize, int k) {    
    if(nums == NULL || numsSize <= 1 || k == 0){
        return;
    }	
	k = k % numsSize;
	if(k < 0){
		k += numsSize;
	}
	k = numsSize - k;
	reverse(nums,k);
	reverse(nums + k,numsSize -k);
	reverse(nums,numsSize);
}

