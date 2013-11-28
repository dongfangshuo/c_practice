#include <stdio.h>
#include <stdlib.h>
int *getArray(int *array) 
{
	int len= 5,i ;		
	printf("the length of array is :%d\n",len);
	for(i = 0;i<len;i++)
	{
		scanf("%d",array++);	
	}
	for(i = len-1;i>= 0;i--)
	{
		array--;	
		printf("%d\n",*array);	
	}
	return array;
}
void main()
{
	int kk[10],*p = kk,*min;
	p = getArray(p);	
	for()	
	{
	
	}
}
