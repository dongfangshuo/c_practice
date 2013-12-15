#include <stdio.h>
#include <stdlib.h>
#include "Util.c"
// search the param and return the index
int search(SeqList *l,DataType d)
{
	int *data = l->data,len = l->length,i;
	for(i = 0;i < len;i++ )
	{
		if(*(data+i) == d)		
		{
			return i;	
		}
	}
//	return -1;
}
 void main()
{
	SeqList s,*l = &s;
	DataType c = 95,*k = &c;
	createSeqListData(l);
	showData(l);
	printf("the index of %d is %d \n ",95,search(l,c));
}
