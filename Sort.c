#include <stdio.h>
#define LEN 10
void inputData(int *k)
{
	int i;	
	printf("scanf begin\n");
	for(i = 0;i < LEN;i++)
	{
		scanf("%d", k++);	
	}
}
void showData(int *k)
{
	int i;	
	printf("printf begin\n");
	for(i = 0;i < LEN;i++)
	{
		printf("%d\n",*k++);	
	}
}
void main()
{
	int data[LEN],*p = data,*i,min;	
	inputData(p);
	p = data;
	showData(p);
	printf("begin sort\n ");
	for(p = data;p<data+LEN;p++)
	{
		for(i = p+1;i<data+LEN;i++)
		{
			if(*p>*i)
			{
			min = *p;
			*p = *i;	
			*i = min;
			}
		}
	}
	p =data;
	showData(p);
}
