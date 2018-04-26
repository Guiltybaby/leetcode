	#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
	char* nums = "qweasd2147483648";
	char* nums2 = "asd2147483648";
	int res = strStr(nums,nums2);
	printf("%d \n",res);
}


