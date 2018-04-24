
#ifndef NULL
#define NULL ((void *)0)
#endif
#ifndef null
#define null ((void *)0)
#endif

#define MAX_INT 2147483647
#define MIN_INT -2147483648
//-2^32 --- 2^31-1
int reverse(int x) {
	int result = 0;
	int flag = 0;
	if(x < 0){
		if(x == MIN_INT){
			return 0;
		}
		x = -x;
		flag = 1;
	}
	do{
		if(result > MAX_INT/10){
			return 0;
		}
		result = x%10 + result*10;
		x /= 10;
	}while(x);
	return flag ? -result : result;
}
