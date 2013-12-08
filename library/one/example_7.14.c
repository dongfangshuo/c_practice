#include <stdio.h>
void show(int *array,int len)
{
	int i = 0; 
	printf("====================================\n");
	for(; i < len; i++)	
	{
		printf("%d \n",array[i]);	
	}
}
void swap(int *p,int len) {
	int i = 0, temp,mid =len/2 - 1; 
	for(; i <= mid; i++ )
	{
		temp = p[i];	
		p[i] = p[len - 1-i];
		p[len - 1 - i] = temp;
	}
	
}
void main()
{
	int k = 7, p[k],*l,i;
	for(i= 0; i < k;i++)
	{
		scanf("%d",&p[i]);
	}
	l = p;
	show(l,k);
	swap(l,k);
	show(l,k);
}
