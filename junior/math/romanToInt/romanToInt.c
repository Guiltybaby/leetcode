#ifndef NULL
#define NULL ((void *)0)
#endif
#ifndef null
#define null ((void *)0)
#endif

char*rome={
'I',//1
'V',//5
'X',//10
'L',//50
'C',//100
'D',//500
'M',//1000
};


int romanToInt(char* s) {
	if(s == NULL)
	{
		return 0;
	}
	int len = strlen(s);
	int count = 0;
	int i;
	for(i = 0; i < len; i++){
		switch(s[i]){
			case 'I':
				if(s[i+1] == 'V'){
					i++;
					count+=4;
					break;
				}else if(s[i+1] == 'X'){
					i++;
					count+=9;
					break;
				}else{
					count+=1;
				}
				break;
			case 'V':
				count+=5;
				break;
			case 'X':
				if(s[i+1] == 'L'){
					i++;
					count+=40;
					break;
				}else if(s[i+1] == 'C'){
					i++;
					count+=90;
					break;
				}else{
					count+=10;
				}
				break;
			case 'L':
				count+=50;
				break;
			case 'C':
				if(s[i+1] == 'D'){
					i++;
					count+=400;
					break;
				}else if(s[i+1] == 'M'){
					i++;
					count+=900;
					break;
				}else{
					count+=100;
				}
				break;
			case 'D':
				count+=500;
				break;
			case 'M':
				count+=1000;
				break;
		}
	}
	return count;
}
