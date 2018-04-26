
#ifndef NULL
#define NULL ((void *)0)
#endif
#ifndef null
#define null ((void *)0)
#endif

char* longestCommonPrefix(char** strs, int strsSize) {
    if(strs == NULL){
		char* prefix = malloc(1);
		prefix[0] = '\0';
		return prefix;
	}
	int len;
	char* prefix = NULL;
	len = strlen(strs[0]);
	prefix = malloc(len + 1);
	memcpy(prefix,strs[0],len);
	int plen = len;
	int i,j;
	for(i = 0; i < strsSize; i++){
		char* str = strs[i];
		if(str == NULL){
			prefix[len] = '\0';
				return prefix;
		}
		len = strlen(str);
		plen = len > plen ? plen:len;
	printf("plen = %d\n",plen);
		for(j = 0; j < plen; j++){
			if(str[j] != prefix[j]){
				if(j == 0){
					prefix[0] = '\0';
					return prefix;
				}
				plen = j;
				break;
			}
		}
	}
	prefix[plen] = '\0';
	return prefix;
}
