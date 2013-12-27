#include <stdio.h>
#include <stdlib.h>
#include "Util.c"
void main()
{
	int len = 10;
	int k[10]={0,1,2,3,4,5,6,7,8,9};	
	Node *n = createLink(k,len);
	show(n);
}
