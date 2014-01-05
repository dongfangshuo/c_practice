#include <stdlib.h>
#include <stdio.h>
#include "matrix.c"
void CreateTriTable(TSMatrix *t, int a[][6], int m, int n )
{
	int i,j,k = 0;	
	for(i = 0; i < m; i++) {
		for(j = 0; j < n; j++) {
			if(a[i][j] != 0 ){
				t->data[k].i = i;	
				t->data[k].j = j;
				t->data[k].v = a[i][j];
				k++;
			}
		}
	}
	t->m = m;
	t->n = n;
	t->t = k;
}
void main()
{
	TSMatrix *tsm =(TSMatrix *)malloc(sizeof(TSMatrix));	
	int m = 4,n = 6,i, arr[][6] = {{2,5,78},{34,78,12,3},{34,67,89,12},{243,6575,1212}}; 	
	CreateTriTable(tsm,arr,m,n);
	printf("%d \n",tsm->t);
	for(i = 0; i < tsm->t; i++) {
		printf("tsm->data[%d](%d,%d)=%d \n",i,tsm->data[i].i,tsm->data[i].j,tsm->data[i].v);
	}
}
