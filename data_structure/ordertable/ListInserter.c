#include <stdio.h>
#include "data.c"
#include "Util.c"
void  InsertList(SeqList *l,int i ,DataType x)
{
	int j,temp,*data,mid;
	if(i < 1 || i > l->length + 1)	
	{
		printf("index %i is not valid \n",i);	
		return;
	}
	if(l->length >= ListSize)
	{
		printf("overflow\n");		
		return; 
	}
	data = l->data;
	for(j = 0; j <= l->length;j++ )	
	{
		if(j >= i-1 )	
		{
			mid = data[j];
			data[j] = temp;
			temp = mid;
		}
	}
	data[i-1] = x;
	l->length++;
}
void main_2()
{
	SeqList s,*l;
	DataType data = 8;
	l = &s;
//	s.length = 10; 
	printf("=================%d,%d \n",s.length,ListSize);
	InsertList(l,1,data);
	InsertList(l,2,18);
	InsertList(l,3,156);
	showData(l);
	InsertList(l,2,8888);
	showData(l);
}
