#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
	int nums1[10] = {3,12,35,99,124,412};
	int nums2[4] = {1,4,23,123};

	merge(nums1,6,nums2,4);
	int i;
	for(i = 0; i < 10; i++)
		printf("%d \n",nums1[i]);
}


