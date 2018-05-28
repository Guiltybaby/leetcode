
#ifndef NULL
#define NULL ((void *)0)
#endif
#ifndef null
#define null ((void *)0)
#endif

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void printa(char** b,int x,int y){
       int i,j;
       for(i = 0; i < x; i++){
               for(j = 0; j < y; j++){
                       printf("%c\t",b[i][j]);
               }
               printf("\n");
       }
               printf("---------------\n");
}


int __exist(char** board, int boardRowSize, int boardColSize, char* word,int x,int y,int len) {
	if(len == 0){
		return 1;
	}
	char temp = board[x][y];
	board[x][y] = '\0';
	int exist = 0;
	if(x > 0 && board[x-1][y] == word[0]){
		exist = __exist(board,boardRowSize,boardColSize,word+1,x - 1,y,len - 1);
		if(exist){
			board[x][y] = temp;
			return exist;
		}
	}
	if(x < boardRowSize - 1 && board[x+1][y] == word[0]){
		exist = __exist(board,boardRowSize,boardColSize,word+1,x + 1,y,len - 1);
		if(exist){
			board[x][y] = temp;
			return exist;
		}
	}
	if(y > 0 && board[x][y - 1] == word[0]){
		exist = __exist(board,boardRowSize,boardColSize,word+1,x,y - 1,len - 1);
		if(exist){
			board[x][y] = temp;
			return exist;
		}
	}
	if(y < boardColSize && board[x][y + 1] == word[0]){
		exist = __exist(board,boardRowSize,boardColSize,word+1,x,y + 1,len - 1);
		if(exist){
			board[x][y] = temp;
			return exist;
		}
	}
	board[x][y] = temp;
	return exist;
}

int exist(char** board, int boardRowSize, int boardColSize, char* word) {
	if(board == NULL || boardRowSize <= 0 || boardColSize <= 0){
		return 0;
	}
	if(word == NULL){
		return 1;
	}
	int len = strlen(word);
	if(len <= 0){
		return 1;
	}
	char c = word[0];
	int i,j;
	int exist = 0;
	for(i = 0; i < boardRowSize; i++){
		for(j = 0; j < boardColSize; j++){
			if(c == board[i][j]){
				exist = __exist(board,boardRowSize,boardColSize,word + 1,i,j,len - 1);
				if(exist){
					return exist;
				}
			}
		}
	}
	return 0;
}
