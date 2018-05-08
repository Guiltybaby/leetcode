
#ifndef NULL
#define NULL ((void *)0)
#endif
#ifndef null
#define null ((void *)0)
#endif

void setZeroes2(int** matrix, int matrixRowSize, int matrixColSize) {
	if(matrix == NULL || matrixRowSize <= 0 || matrixRowSize <= 0){
		return;
	}
	int* rowz = calloc(sizeof(int),matrixRowSize);
	int* colz = calloc(sizeof(int),matrixColSize);
	int i,j;
	for(i = 0; i < matrixRowSize;i++){
		for(j = 0; j < matrixColSize;j++){
			if(matrix[i][j] == 0){
				rowz[i]=1;
				colz[j]=1;
//printf("i = %d j = %d \n",i,j);
			}
		}
	}
	for(i = 0; i < matrixRowSize;i++){
		if(rowz[i] == 1){
			for(j = 0; j < matrixColSize;j++){
				matrix[i][j] = 0;
			}
		}
	}
	for(j = 0; j < matrixColSize;j++){
		if(colz[j] == 1){
			for(i = 0; i < matrixRowSize;i++){
				matrix[i][j] = 0;
			}
		}
	}
	free(rowz);
	free(colz);
}

#define MAX_INT 2147483647

void setZeroes1(int** matrix, int matrixRowSize, int matrixColSize) {
	if(matrix == NULL || matrixRowSize <= 0 || matrixRowSize <= 0){
		return;
	}
	int i,j,k;
	for(i = 0; i < matrixRowSize;i++){
		for(j = 0; j < matrixColSize;j++){
			if(matrix[i][j] == 0){
				for(k = 0; k < matrixColSize;k++){
					if(matrix[i][k] != 0){
						matrix[i][k] = MAX_INT;
					}
				}
				for(k = 0; k < matrixRowSize;k++){
					if(matrix[k][j] != 0){
						matrix[k][j] = MAX_INT;
					}
				}
			}
		}
	}
	for(i = 0; i < matrixRowSize;i++){
		for(j = 0; j < matrixColSize;j++){
			if(matrix[i][j] == MAX_INT){
				matrix[i][j] = 0;
			}
		}
	}
}



void setZeroes(int** matrix, int matrixRowSize, int matrixColSize) {
    int row_zero=0,col_zero=0;
	int i,j;

    for(i=0;i<matrixRowSize;i++){
        for(j=0;j<matrixColSize;j++){
            if(matrix[i][j]==0){
				if(j==0){
				    col_zero=1;
				}else{
	                matrix[0][j]=0;
				}
				if(i==0){
				    row_zero=1;
				}else{
	                matrix[i][0]=0;
				}
            }
        }
    }
    
    
    for(i=1;i<matrixRowSize;i++){
        if(matrix[i][0]==0){
            for(j=1;j<matrixColSize;j++){
                matrix[i][j]=0;
            }
        }
    }
    for(j=1;j<matrixColSize;j++){
        if(matrix[0][j]==0){
            for(i=1;i<matrixRowSize;i++){
                matrix[i][j]=0;
            }
        }
    }
    if(row_zero){
        for(j=0;j<matrixColSize;j++){
            matrix[0][j]=0;
        }
    }
    if(col_zero){
        for(i=0;i<matrixRowSize;i++){
            matrix[i][0]=0;
        }
    }
}
