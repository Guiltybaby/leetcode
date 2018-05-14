
#ifndef NULL
#define NULL ((void *)0)
#endif
#ifndef null
#define null ((void *)0)
#endif


char* longestPalindrome(char* s) {
	if(s == NULL){
		return NULL;
	}
	int len = strlen(s);
	char* result = calloc(sizeof(char),len + 1);
	if(len < 1){
		return result;
	}
	int i,j;
	char* p = s;
	int max = 1;
	char* start = s;
	for(i = 0; i < len; i++){
		int k = 0;
		while(i + k + 1 < len && p[i] == p[i+k + 1]){
			k++;
		}
		for(j = i + (max>k?max:k); j < len; j++){
			if(p[i] == p[j]){
				char* left = p + i + 1;
				char* right = p + j -1;
				while(left < right){
					if(*left != *right){
						break;
					}else{
						left++;
						right--;
					}
				}
				if(left >= right){
					max = j-i+1;
					start = p + i;
				}
			}
		}
	}
	memcpy(result,start,max);
	return result;
}


