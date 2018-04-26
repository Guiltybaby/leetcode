
#ifndef NULL
#define NULL ((void *)0)
#endif
#ifndef null
#define null ((void *)0)
#endif

int strStr(char* haystack, char* needle) {
	int i,j,k;
	int hlen,nlen;
	if(needle == NULL){
		return 0;
	}
	if(haystack == NULL){
		return -1;
	}
	hlen = strlen(haystack);
	nlen = strlen(needle);
	if(nlen > hlen){
		return -1;
	}else if(nlen <= 0){
		return 0;
	}
    for(i = 0; i < hlen; i++){
		if(nlen > hlen - i){
			return -1;
		}
		for(j = 0; j < nlen; j++){
			if(haystack[i+j] == needle[j]){
				if(j == nlen -1){
					return i;
				}
			}else{
				break;
			}
		}
	}
	return -1;
}
