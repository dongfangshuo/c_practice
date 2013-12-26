#include <stdio.h>
#include <stdlib.h>
#include "node.c"
LinkList headInsert(DataType *dtp,int size)
{
	LinkList head;		
	int i; 
	DataType val;
	ListNode *node;
	head  = (ListNode *)malloc(sizeof(ListNode));
	head->next=NULL;
	for(i = 0; i < size; i++)	
	{
		node  = (ListNode *)malloc(sizeof(ListNode));	
		val =*(dtp+i); 
	//	printf("%d\n",val);	
		node->data = val;
		node->next = head->next; 
		head->next = node;
	}
	return head;
}
void showLink(LinkList head)
{
	head = head->next;	
	while(head->next != NULL)
	{
		printf("%d\n",head->data);	
		head = head->next;
	}
		printf("%d\n",head->data);	
}
void main()
{
	int size = 10;	
	LinkList head;
	DataType ds[10] = {0,1,2,3,4,5,6,7,8,9}, *dtp  = ds;
	printf("main \n");
	head = headInsert(dtp,size);
	showLink(head);
}
