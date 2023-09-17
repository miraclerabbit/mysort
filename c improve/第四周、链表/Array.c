#include <stdio.h>
#include <stdlib.h>
 
void array_free(Array *a){
	free(a->array);
	a->array=0;
	a->size=0;}
	
int array_size(Array *a){
	int i;
	i=a->size;
	return i;
}	
int* array_at(Array *a,int index){
	int *i=NULL;
	i=&(a->array[index]);
	return i;
}
void array_inflate(Array *a){
	int *q=(int *)malloc(sizeof(int)*2*(a->size));
	int i;
	for(i=0;i<a->size;i++){
		q[i]=a->array[i];
	}
	free(a->array);
	
	a->array=q;
	a->size*=2;
	 
}

