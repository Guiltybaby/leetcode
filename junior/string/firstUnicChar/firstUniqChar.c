
#ifndef NULL
#define NULL ((void *)0)
#endif
#ifndef null
#define null ((void *)0)
#endif


int firstUniqChar1(char* s) {
	int i,j;
	int ret = -1;
	if(s == NULL){
		return -1;
	}
	int len = strlen(s);
	if(len == 1){
		return 0;
	}
	printf("len = %d \n",len);
	for(i = 0; i < len;i++){	
		for(j = 0; j < len;j++){
			printf("s = %d %d \n",s[i],s[j]);
			if(s[i] == s[j] && i != j){
				break;
			}
			if(j == len - 1){
				ret = i;
				break;
			}
		}
		if(ret >=0)break;
	}
	return ret;
}

int firstUniqChar(char* s) {
	char map[26] = {0};
	int i = 0;
	int len = strlen(s);
	
	for(i = 0; i < len; i++){
		map[s[i] - 'a']++;
	}
	char temp = 0;
	for(i = 0; i < 26; i++){
		if(map[i] == 1){
			temp = i + 'a';
			break;
		}
	}
	if(temp){
		for(i = 0; i < len; i++){
			if(temp == s[i]){
				return i;
			}
		}
	}else{
		return -1;
	}	
}

	

