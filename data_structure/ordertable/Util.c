#include "data.c"
#include <stdio.h>
void showData(SeqList *l)
{
	int i,len,*data; 
	data = l->data;	
	printf("seqlist length is %d \n ",l->length);
	for(i = 0,len = l->length; i < len;i++)
	{
		printf("the index %d => %d \n",i,*(data+i));	
	}
}
void insertSeqList(SeqList *l,DataType k )
{
	int *data = l->data,len = l->length;
	*(data+len) = k;
	l->length++; 
}
void createSeqListData(SeqList *l)
{
	
	insertSeqList(l,89);
	insertSeqList(l,67);
	insertSeqList(l,4699);
	insertSeqList(l,423);
	insertSeqList(l,4356);
	insertSeqList(l,42433);
	insertSeqList(l,42111);
	insertSeqList(l,45);
	insertSeqList(l,35);
	insertSeqList(l,95);
	insertSeqList(l,75);
	insertSeqList(l,35);
	insertSeqList(l,45);
	insertSeqList(l,15);
	insertSeqList(l,65);
	insertSeqList(l,4125);
	insertSeqList(l,4589);
	insertSeqList(l,41115);
}
