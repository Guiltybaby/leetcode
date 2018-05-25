
#ifndef NULL
#define NULL ((void *)0)
#endif
#ifndef null
#define null ((void *)0)
#endif

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void oermute(int*** result,int* returnSize,int* arr,int index,int size){
//    printf("index = %d returnSize = %d size = %d\n",index,*returnSize,size);
    if(index == size){
        *result = realloc(*result,sizeof(int*)*(*returnSize + 1));
        int* temp = malloc(sizeof(int)*size);
        memcpy(temp,arr,size*sizeof(int));
        (*result)[*returnSize] = temp;
        (*returnSize)++;
        return;
    }
    int i = index;
    while(i < size){
        int temp = arr[index];
        arr[index] = arr[i];
        arr[i] = temp;
//        printf("arr[%d] = %d \n",i,arr[i]);
//        printf("index arr[%d] = %d \n",index,arr[index]);
        oermute(result,returnSize,arr, index + 1,size);
        arr[i] = arr[index];
        arr[index] = temp;
        i++;
    }
}

int** permute(int* nums, int numsSize, int* returnSize) {
    int** result = NULL;
    *returnSize = 0;
    int* arr = malloc(sizeof(int)*numsSize);
    memcpy(arr,nums,numsSize*sizeof(int));
    oermute(&result,returnSize,arr,0,numsSize);
    free(arr);
    return result;
}
