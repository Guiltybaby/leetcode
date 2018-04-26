#ifndef __SORT_HEADER__
#define __SORT_HEADER__

void bsort(int* nums, int numsSize,int (*comp)(const int,const int));
void qsort(int* nums, int left,int right,int (*comp)(const int,const int));
#endif

