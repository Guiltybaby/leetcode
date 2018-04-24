
#ifndef NULL
#define NULL ((void *)0)
#endif
#ifndef null
#define null ((void *)0)
#endif

static inline void swap(char* a,char* b){
	char temp = *a;
	*a = *b;	
	*b = temp;
}


char* reverseString(char* s) {
	if(s == NULL){
		return NULL;
	}
    int len = strlen(s);
	if(len <= 1){
		return s;
	}
	int i;
	for(i = 0; i < len/2; i ++){
		char temp = s[len - 1 -i];
		s[len - 1 -i] = s[i];
		s[i] = temp;
	}
	return s;
}
