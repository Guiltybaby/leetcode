
#ifndef NULL
#define NULL ((void *)0)
#endif
#ifndef null
#define null ((void *)0)
#endif

#define MAX_INT 2147483647
#define MIN_INT -2147483648


int myAtoi(char* s) {
	int i,j;
	int ret = -1;
	if(s == NULL){
		return -1;
	}
	int len = strlen(s);
	if(len <= 0){
		return 0;
	}
	printf("len = %d \n",len);
	int first = -1;
	int last = 0;
	int flag = 0;
	int result = 0;
	for(i = 0; i < len;i++){
		if(s[i] == ' ' || s[i] == '\t'){
			if(first == -1){
				continue;
			}else{
				break;
			}
		}else if(s[i] == '-'){
			if(first == -1){
				first = i + 1;
				flag = 1;
				continue;
			}else{
				break;
			}
		}else if(s[i] == '+'){
			if(first == -1){
				first = i + 1;
				flag = 0;
				continue;
			}else{
				break;
			}
		}else if(s[i] >= '0' && s[i] <= '9'){
			if(first == -1){
				first = i;
			}
			last = i;
		}else{
			break;
		}
	}
	if(first < 0){
		return 0;
	}
	while(last >= first){
		if(flag){
			if(result > -MIN_INT/10){
				return MIN_INT;
			}else if (result == -MIN_INT/10){
				if(s[first] - '0' >= -MIN_INT%10){
					return MIN_INT;
				}
			}
		}else{
			if(result > MAX_INT/10){
				return MAX_INT;			
			}else if (result == MAX_INT/10){
				if(s[first] - '0' >= MAX_INT%10){
					return MAX_INT;
				}
			}
		}
		result = s[first] - '0' + result * 10;
		first++;
//	printf("flag = %d len = %d \n",flag,result);
	}
	return flag?-result:result;
}


	

