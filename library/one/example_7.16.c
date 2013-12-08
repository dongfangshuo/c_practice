#include <stdio.h>
int a,b,*max = &a ,*min = &b;
void getMaxAndMin(int * array,int len);
void main()
{
	int len =5,a[len],*array,i = 0;
	array = a;
	for(;i < len; i++)
	{
		scanf("%d",array + i);	
	}
	getMaxAndMin(array,len);
	printf("Max = %d,min = %d \n", *max,*min);
}
void getMaxAndMin(int * array,int len)
{
	int i =0,temp;	
//	printf("array[0] = %d \n",array[0]);
	*max =*min = *array; 
	for(;i < len ;i ++ )
	{
	printf("Max = %d,min = %d \n", *max,*min);
		if( array[i] > *max)	
		{
			*max =  array[i];	
		}
		if( array[i] < *min)
		{
			*min =  array[i];	
		}
	}
}
