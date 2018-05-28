#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
	char st[3][1] = {
  {'A'},
  {'A'},
  {'A'},
};
	int boardRowSize = 3;
	int boardColSize = 1;
	int i = 0;
	char* board[3];
	for(i = 0; i < boardRowSize; i++){
		board[i] = st[i];
	}
	char* word = "AAAA";
	int ret = exist(board,boardRowSize,boardColSize,word);
	if(ret){
		printf("true \n");
	}else{
		printf("false \n");
	}
}


