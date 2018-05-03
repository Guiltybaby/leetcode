#ifndef NULL
#define NULL ((void *)0)
#endif
#ifndef null
#define null ((void *)0)
#endif

int hammingWeight(unsigned int n) {
    int count = 0;
	while(n){
		if(n%2){
			count++;
		}
		n/=2;
	}
	return count;
}
