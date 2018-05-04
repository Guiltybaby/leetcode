#ifndef NULL
#define NULL ((void *)0)
#endif
#ifndef null
#define null ((void *)0)
#endif


int hammingDistance(int x, int y) {
    int temp = x^y;
	int count = 0;
	while(temp){
		if(temp & 0x1){
			count++;
		}
		temp = temp >> 1;
	}
	return count;
}
