
#ifndef NULL
#define NULL ((void *)0)
#endif
#ifndef null
#define null ((void *)0)
#endif

int isPalindrome(char* s) {
    if(s == NULL){
		return 1;
	}
	int len = strlen(s);
	if(len <= 1){
		return 1;
	}		
	char* temp = malloc(len);
	int j,i = 0;
	int tlen = 0;
	for(i = 0; i < len; i++){
		if((s[i] >= 'a' && s[i] <= 'z')){
			temp[tlen] = s[i] - 'a';
			tlen++;
		}else if(s[i] >= 'A' && s[i] <= 'Z'){
			temp[tlen] = s[i] - 'A';			
			tlen++;
		}else if(s[i] >= '0' && s[i] <= '9'){
			temp[tlen] = s[i] - '0' + 26;			
			tlen++;
		}
	}

	i = 0;
	j = tlen - 1;
	while(i < j){
		if(temp[i] != temp[j]){
			free(temp);
			return 0;
		}
		i++;
		j--;
	}
	free(temp);
	return 1;
}
