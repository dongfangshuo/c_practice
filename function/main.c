#include <stdio.h>
#include "c1.c"
#include "c2.c"
void main()
{
	printf("call main\n");
	c1();	
	c2();
	printf("end \n");
}

