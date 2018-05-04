#ifndef NULL
#define NULL ((void *)0)
#endif
#ifndef null
#define null ((void *)0)
#endif


unsigned int reverseBits(unsigned int n) {
	int i = 0;
	int result = 0;
	for(i = 0; i < 32;i++){
		int a = n&0x1;
		n=n>>1;
		result = result<<1;
		result += a;
	}
	return result;
}
