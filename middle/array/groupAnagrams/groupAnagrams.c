
#ifndef NULL
#define NULL ((void *)0)
#endif
#ifndef null
#define null ((void *)0)
#endif

static inline int getMap(char* s) {
	int* map = calloc(sizeof(int),26);
	int i = 0;
	if(s == NULL){
		return map;
	}
	int lens = strlen(s);
	for(i = 0; i < lens; i++){
		map[s[i] - 'a']++;
	}
	return map;
}

static inline int compMap(int* maps,int* mapt){
	char temp = 0;
	int i;
	for(i = 0; i < 26; i++){
		if(maps[i] != mapt[i]){
			return 0;
		}
	}
	return 1;
}
	


char*** groupAnagrams(char** strs, int strsSize, int** columnSizes, int* returnSize) {
	if(strs == NULL || strsSize <= 0 || returnSize == NULL || columnSizes == NULL){
		return NULL;
	}
	int i = 0;
	char*** result = (char***)malloc(sizeof(char**)*strsSize);
	int* sizes = (char*)calloc(sizeof(int),strsSize);
	int** maps = (char*)malloc(sizeof(int**)*strsSize);
	int size;
	int top = 0;
	int lastSame = 0;
    for(i = 0; i < strsSize;i++){
		char* str = strs[i];
		//comp diff
		int index = -1;
		int j = 0;
	
		int* map = getMap(str);

		for(j = 0; j < top; j++){
			if(compMap(map,maps[j]))
			{
				index = j;
				break;
			}
		}

		if(index >=0){
//			*result
			free(map);
			map = NULL;
			size = ++sizes[index];
			char** line = realloc(result[index],sizeof(char*)*size);
			result[index] = line;
			line[size-1] = str;
		}else{
			size = 1;
			char** line = malloc(sizeof(char*)*size);
			maps[top] = map;
			line[0] = str;
			result[top] = line;
			sizes[top] = 1;
			top++;
		}
	}
	*returnSize = top;
	*columnSizes = sizes;
	for(i = 0; i < top; i++){
		if(maps[i]){
			free(maps[i]);
		}
	}
	free(maps);
	return result;
}
