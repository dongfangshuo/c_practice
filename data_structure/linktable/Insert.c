#include <stdio.h>
#include <stdlib.h>
#include "node.c"
//有头节点
LinkList headInsert1(DataType *dtp,int size)
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
//不用头节点
//这个方法太笨
LinkList headInsert2(DataType *dtp,int size)
{
	LinkList head = NULL;		
	int i; 
	DataType val;
	ListNode *node;
	for(i = 0; i < size; i++)	
	{
		node  = (ListNode *)malloc(sizeof(ListNode));	
		val =*(dtp+i); 
		if(head ==NULL)
		{
			head = node;		
			head->data = val;
			head->next=NULL;
		}else{
			node->data = head->data;
			head->data = val;
			node->next = head->next; 
			head->next = node;
		}
	}
	return head;
}
LinkList tailInsert(DataType *dtp,int size)
{
	LinkList tail;	
	int i;
	DataType val;

}
void showLink(LinkList head)
{
//	head = head->next;	
	while(head->next != NULL)
	{
		printf("%d\n",head->data);	
		head = head->next;
	}
		printf("%d\n",head->data);	
}
Status kk()
{
	return OK;
 }
void main()
{
	int size = 10;	
	LinkList head;
	DataType ds[10] = {0,1,2,3,4,5,6,7,8,9}, *dtp  = ds;
	printf("main \n");
//	head = headInsert2(dtp,size);
//	showLink(head);
	kk();
}
