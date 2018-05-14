
#ifndef NULL
#define NULL ((void *)0)
#endif
#ifndef null
#define null ((void *)0)
#endif

static int lOfLSs(char* s){
	int len = strlen(s);

}

int lengthOfLongestSubstring1(char* s) {
    if(s == NULL){
		return 0;
	}
	int len = strlen(s);
	if(len <= 0){
		return 0;
	}
	int i,j,k;
	int max = 1;
	char* p = s;
	for(i = 0; i < len; i++){
		char left = p[i];
		int temp = 1;
		for(j = i+1; j < len; j++){
			char right = p[j];
			int same = 0;
			for(k = i; k < j; k++){
				if(right == p[k]){
					same = 1;
					break;
				}
			}
			if(!same){
				temp++;
			}else{
				break;
			}
			max = max > temp ? max : temp;
		}
	}
	return max;
}


int lengthOfLongestSubstring(char* s) {
    if(s == NULL){
		return 0;
	}
	int len = strlen(s);
	if(len <= 0){
		return 0;
	}
	int max = 1;
	int j,i;
	char* p = s;
	for(i = 0; i < len; i++){
		int map[128] = {0};
		char c = p[i];
		map[c] = 1;
		int temp = 1;
		for(j = i+1; j < len; j++){
			char curr = p[j];
			if(map[curr] == 0){
				map[curr] = 1;
				temp++;
			}else{
				break;
			}
			max = max > temp ? max : temp;
		}
		if(max >= 127){
			return max;
		}
	}
	return max;
}

