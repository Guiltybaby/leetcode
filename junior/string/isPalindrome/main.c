	#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
	char* nums = "A man, a plan, a canal: Panama";
	int res = isPalindrome(nums);
	if(res){
		printf("%d \n",res);
	}else{
		printf("error \n");
	}
}


