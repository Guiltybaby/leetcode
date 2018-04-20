#include "removeDuplicates.h"
#define NULL ((void *)0)

int removeDuplicates(int* nums, int numsSize) {
    int noDupSize = 0;
    int temp = 0;
    int i = 0;
    if(nums == NULL || numsSize <= 0){
        return -1;
    }
    temp = nums[0];
    for(i = 0; i < numsSize; i++){
        if(temp == nums[i]){
            continue;
        }else{
            temp = nums[i];
            nums[noDupSize] = nums[i];
            noDupSize++;
        }
    }
    return noDupSize;
}
