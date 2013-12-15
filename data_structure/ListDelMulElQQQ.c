#include <stdio.h>
#include  "Util.c"
#include  "data.c"
void delMulEls(SeqList *l,DataType d)
{
	int *data = l->data,len= l->length,i,j;	
	for(i  = 0,j=0 ;i < len;i++)	
	{
		if()		
		{
			
		}
	}
}
void  main()
{
	SeqList s,*l = &s;
	createSeqListData(l);
	showData(l);
	delMulEls(l,23);
	showData(l);
}
