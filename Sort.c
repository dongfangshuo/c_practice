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
//Bubble sort
void bubbleSort(int *p)
{
	int i,j, min;
	printf("Bubble sort \n");	
	for(i = 0;i < LEN;i++)
	{
		for(j = 0; j < LEN-1-i;j++)	
		{
			if(p[j] > p[j+1])	
			{
				min = p[j];	
				p[j]= p[j+1];
				p[j+1] = min;
			}
		}	
	}
}
//selection sort
void selectionSort(int *p)
{
	int i,j,min;	
	printf("selection sort \n");
	for(i = 0;i < LEN;i++) 
	{
		 for(j = i+1;j < LEN; j++)	
		{
			if(*(p+i) > *(p+j))	
			{
				min = *(p+i);
				*(p+i)= *(p+j);
				*(p+j)=min;
			}		
		}
	}

}
//insert sort
void insertSort(int *p)
{
	int i,j,min;
	printf("insert sort \n");	
	for(i = 0; i < LEN;i++)
	{
		for(j = i+1;j < LEN;j++)
		{
			if(p[i] > p[j])	
			{
				min = p[i];	
				p[i] = p[j];
				p[j] = min;		
			}
		}
	}	
}
void main()
{
	int data[LEN],*p = data,*i,min;	
	inputData(p);
	p = data;
	showData(p);
	printf("begin sort ");
//	bubbleSort(p);
//	selectionSort(p);
	insertSort(p);
	p =data;
	showData(p);
}
