#include "removeDuplicates.h"
#define NULL ((void *)0)

int removeDuplicates(int* nums, int numsSize) {
    int storeIndex = 1;
    int cmpVal = 0;
    int i = 0;
    if(nums == NULL || numsSize <= 0){
        return -1;
    }
    cmpVal = nums[0];
    for(i = 0; i < numsSize; i++){
        if(cmpVal == nums[i]){
            continue;
        }else{
            cmpVal = nums[i];
            nums[storeIndex] = nums[i];
            storeIndex++;
        }
    }
    return storeIndex;
}
