#include "tree.h"
#ifndef NULL
#define NULL ((void *)0)
#endif
#ifndef null
#define null ((void *)0)
#endif

void merge(int* nums1, int m, int* nums2, int n) {
	if(nums1 == NULL || nums2 == NULL){
		return;
	}
	int index1 = m - 1;
	int index2 = n - 1;
	int len = n + m - 1;
	while(1){
		if(index1 < 0){
			int i = 0;
			for(i = 0; i <= index2; i++){
				nums1[i] = nums2[i];
			}
			break;
		}
		if(index2 < 0){
			break;
		}
		if(nums1[index1] > nums2[index2]){
			nums1[len] = nums1[index1];
			index1--;
			len--;
		}else{
			nums1[len] = nums2[index2];
			index2--;
			len--;
		}
	}

}
