#include <stdlib.h>
#include <stdio.h>
#include "node.c"
Node *createLink(int k[],int len)
{
	Node *h,*n,*p;
	int i; 
	p = h = (Node *)malloc(sizeof(Node));
	h->data = k[0];
	h->next = NULL; 
	for(i = 1;i < len;i++)
	{
		n = (Node *)malloc(sizeof(Node));	
		n -> data = k[i];	
		n->next =NULL;
		p->next = n;		
		p = n;	
	}
	return h;  
}
void show(Node *n)
{
	while(n != NULL)	
	{
		printf("%d \n",n->data); 
		n = n->next;
	}
}
int getLength(Node *n)
{
	int i = 0;	
	while(n != NULL)	
	{
		i++;	
		n = n->next;
	}
	return i;
}
DataType findElValByIndex(Node *n,int index)
{
	int i = 0;	
	while(n !=NULL)
	{
		if(i == index )	
		{
			return n->data;	
		}	
		n = n->next;
		i++;
	}
}
int findElIndexByVal(Node *n,DataType d)
{
	int i = 0;	
	while(n !=NULL)
	{
		if(d == (n->data) )	
		{
			return i;	
		}	
		n = n->next;
		i++;
	}
	
}
Node *findElByIndex(Node *n,int index)
{
	int i = 0;	
	while(n != NULL)
	{
		if(i++ == index)
		{
			return n;	
		}	
		n = n->next;
	}
}
void insert(Node *n,int index,DataType val)
{
	int i = 0;
	Node *m = findElByIndex(n,index);
	Node *new = (Node *)malloc(sizeof(Node));	
	new->data = val;
	new ->next = m->next;	
	m->next = new;
}
void removeNode(Node *n,int index)
{
	Node *m = findElByIndex(n,index-1);
	Node *del = m-> next; 
	m -> next = m->next->next;
	free(del);
}
void main()
{
	int len = 10,k[10] = {1,2,3,4,5,6,7,8,9,0}; 	
	Node *n = createLink(k,len);
	printf("the length is %d \n",getLength(n));	
	printf("the value of index 3 is %d \n",findElValByIndex(n,3));
	printf("the index if value 4 is %d \n",findElIndexByVal(n,7));
	show(n);	
	printf("insert before \n");
	insert(n,5,233);
	printf("insert after \n");
	show(n);	
	printf("remove \n");
	removeNode(n,3);
	show(n);	
}
