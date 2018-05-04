#ifndef NULL
#define NULL ((void *)0)
#endif
#ifndef null
#define null ((void *)0)
#endif


int isValid(char* s) {
	if(s == NULL){
		return 1;
	}
	int len = strlen(s);
	if(len%2 != 0){
		return 0;
	}
	char* temp = malloc(len/2 + 1);
	temp[0] = 0;
	char* p = s;
	int index = 0;
	while(*p){
		switch(*p){
			case '{':
				temp[index] = 1;
				index++;
				break;
			case '}':
				if(temp[--index] != 1){return 0;}
				break;
			case '[':
				temp[index] = 2;
				index++;
				break;
			case ']':
				if(temp[--index] != 2){return 0;}
				break;
			case '(':
				temp[index] = 3;
				index++;
				break;
			case ')':
				if(temp[--index] != 3){return 0;}
				break;
		}
		if(index > len/2) {
			return 0;
		}
		p++;
	}
	free(temp);
	if(index){
		return 0;
	}else{
		return 1;
	}
}
