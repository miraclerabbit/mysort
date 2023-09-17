#include "Array.c"
#include <stdio.h>
#include <stdlib.h>
typedef struct {
	int size;
	int *array;
}Array;
Array array_creat(int init_size ){
	Array a;

	a.size=init_size;
	a.array=(int*)malloc(sizeof(int)*a.size);
	return a;
	}
int main()
{
	Array a=array_creat(100);
	
	
	
	return 0;
}
