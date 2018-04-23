
#ifndef NULL
#define NULL ((void *)0)
#endif
#ifndef null
#define null ((void *)0)
#endif


int isvalid(char* nums){
	int i,j;
	for(i = 0;i < 9; i++){
		char temp = nums[i];
		if(temp == '.'){
			continue;
		}
		for(j = i + 1;j < 9; j++){
			if(temp == nums[j]){
				return 0;
			}
		}
	}
	return 1;
}

int isValidSudoku(char** board, int boardRowSize, int boardColSize) {
 	if(board == NULL || boardRowSize != 9 || boardColSize != 9){
		return 0;
	}
	int j,k,i,l;
	char* board_t = board;
	for(i = 0; i < 9; i++){
		char row[9] = {0};
		char col[9] = {0};
		for(j = 0; j < 9; j++){
			row[j] = board_t[i*9 + j];
			col[j] = board_t[j*9 + i];
		}	
		if (!isvalid(row)){
			return 0;
		}
		if (!isvalid(col)){
			return 0;
		}
	}
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			char square[9] = {0};
			for(k = 0; k < 3; k++){
				for(l = 0; l < 3; l++){
					square[3*k+l] = board_t[(i*3+k)*9+j*3 + l];
				}
			}
			if(!isvalid(square)){
				return 0;
			}
		}
	}
	return 1;
}
