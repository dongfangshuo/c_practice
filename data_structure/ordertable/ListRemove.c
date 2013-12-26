#include <stdio.h>
#include <stdlib.h>
#include "ListInserter.c"
void removeList(SeqList *l,int index)
{	
	int i,len,*data;
	data = l->data; 
	for(i = 0,len =l->length; i < len -1 ;i++ )
	{
		if((i+1) >= index)	
		{
			data[i] = data[i+1];	
		}
	}
	l->length--;
	
}
void main()
{
	SeqList g,*l;
	//this step is very important ! if  remove the step , call function "InsertList(l,1,89);" directly, it will cause errors;
	//i think this step is to initialize "data.c"
	DataType data  = 89;
	l = &g;
	InsertList(l,1,data);
	InsertList(l,2,3444);
	InsertList(l,3,1);
	showData(l);
	printf("========remove index 1=======\n");
	removeList(l,1);	
	printf("=======after remove ========\n");
	showData(l);
}
void main_r()
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
