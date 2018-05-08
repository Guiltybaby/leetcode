#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
	char *strs[]={"eat", "tea", "tan", "ate", "nat", "bat"};
	int i,j;
	int* columnSizes = NULL;
	int size = 0;
	printf("size = %d \n",sizeof(strs)/sizeof(strs[0]));
	char*** strss = groupAnagrams(strs,sizeof(strs)/sizeof(strs[0]),&columnSizes,&size);
	printf("strss = %p size = %d\n",strss,size);
	if(strss){
		for(i = 0; i < size; i++){
			for(j = 0; j < columnSizes[i]; j++){
				printf("%s\t",strss[i][j]);
			}
			printf("\n");
		}
	}else{
		printf("error ret = %p\n",strss);
	}
}


