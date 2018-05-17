
#ifndef NULL
#define NULL ((void *)0)
#endif
#ifndef null
#define null ((void *)0)
#endif
#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

void land(char** grid,int x,int y,int rowsize,int colsize){
	grid[x][y] = '2';
	if(y - 1 >= 0 && grid[x][y - 1] == '1'){
		//row has count
		grid[x][y - 1] = '2';
		land(grid,x,y - 1,rowsize,colsize);
	}
	if(y + 1 < colsize && grid[x][y + 1] == '1'){
		//row has count
		grid[x][y + 1] = '2';
		land(grid,x,y + 1,rowsize,colsize);
	}
	if(x - 1 >= 0 && grid[x - 1][y] == '1'){
		//col has count
		grid[x - 1][y] = '2';
		land(grid,x - 1,y,rowsize,colsize);
	}
	if(x + 1 < rowsize && grid[x + 1][y] == '1'){
		grid[x + 1][y] = '2';
		land(grid,x + 1,y,rowsize,colsize);
	}
}

int numIslands(char** grid, int gridRowSize, int gridColSize) {
	int count = 0;
	int i,j;
	for (i = 0; i < gridRowSize; i++){
		for(j = 0; j < gridColSize; j++){
		//find first 1
			if(grid[i][j] == '1'){
				land(grid,i,j,gridRowSize,gridColSize);
				count++;
				int k,l;
			}
		}
	}
	return count;
}
