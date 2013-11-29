#include <stdio.h>
#include <stdlib.h>
int *getArray(int *array) 
{
	int len= 10,i ;		
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
	int kk[10],*p = kk,*min,i;
	p = getArray(p);	
	min = p;
	printf("main method \n");
	for(i = 0;i<10;i++)	
	{
	//	printf("the num is %d of index %d\n",*p++,i);	
		if(*min> *p)
		{
			min = p;
		}
			p++;
	}
	kk[0] = *min;
	p = kk;
	printf("after process \n");
	for(i = 0;i<10;i++)	
	{
		printf("the num is %d of index %d\n",*p++,i);	
	}
	
}
