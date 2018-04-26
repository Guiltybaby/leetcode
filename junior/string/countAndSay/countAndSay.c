
#ifndef NULL
#define NULL ((void *)0)
#endif
#ifndef null
#define null ((void *)0)
#endif

char* countAndSay(int n) {
	if(n <= 0){
		return NULL;
	}
  	if(n == 1){
		char* temp = malloc(2);
		temp[0] = '1';
		temp[1] = '\0';
		return temp;
	}
	char* c = countAndSay(n-1);
	int len = strlen(c);
	char* t = malloc(len*2 + 1);
	int i = 0;
	int j = 0;
	int k = 0;
	for(i = 0; i < len;){
		if(i >= len - 1){
			t[j] = '1';
			t[j + 1] = c[i];
			j += 2;
			break;
		}
		int first = c[i];
		int count = 1;
		for(k = i+1; k < len;k++){
			if(c[i] == c[k]){
				count++;
			}else{
				break;
			}
		}
		t[j] = count + '0';
		t[j + 1] = c[i];		
		j += 2;
		i = k;
		printf("i = %d \n",i);
	}
	t[j] = '\0';
	free(c);
	return t;   
}
