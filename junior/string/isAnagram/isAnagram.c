
#ifndef NULL
#define NULL ((void *)0)
#endif
#ifndef null
#define null ((void *)0)
#endif


int isAnagram(char* s,char* t) {
	char maps[26] = {0};
	char mapt[26] = {0};
	int i = 0;
	if(s == NULL){
		if(t == NULL){
			return 1;
		}else{
			return 0;
		}
	}else if(t == NULL){
		return 0;
	}

	int lens = strlen(s);
	int lent = strlen(t);
	if(lens != lent){
		return 0;
	}else if (lens == 0){
		return 1;
	}

	for(i = 0; i < lens; i++){
		maps[s[i] - 'a']++;
		mapt[t[i] - 'a']++;
	}
	char temp = 0;
	for(i = 0; i < 26; i++){
		if(maps[i] != mapt[i]){
			return 0;
		}
	}
	return 1;
}

	

