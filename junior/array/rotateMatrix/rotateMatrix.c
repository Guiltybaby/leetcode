#define NULL ((void *)0)

void rotate(int** matrix, int matrixRowSize, int matrixColSizes) {
	if(matrix == NULL || matrixRowSize != matrixColSizes){
		return;
	}
	int temp = 0;
	int center = 0;
	int i,j,index,hf;
	int *ma = matrix;
	hf = matrixRowSize/2;
	index = matrixRowSize -1;
	int col = matrixRowSize;
    for(i = 0; i < hf + matrixRowSize%2; i++){
	    for(j = 0; j < hf; j++){

			int temp;
 			temp = ma[i*col + j];
			ma[i*col+j] = ma[(index - j)*col + i];
			ma[(index - j)*col + i] = ma[(index -i)*col + index -j];
			ma[(index -i)*col + index -j] = ma[j*col + index - i];
			ma[j*col + index - i] = temp;

/*
			printf("matrix[i][j] = %d",matrix[i][j]);
 			temp = matrix[i][j];
			matrix[i][j] = matrix[index - j][i];
			matrix[index - j][i] = matrix[index -i][index -j];
			matrix[index -i][index -j] = matrix[j][index - i];
			matrix[j][index - i] = temp;

*/
		}
	}
}
