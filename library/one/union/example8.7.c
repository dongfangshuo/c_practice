#include <stdio.h>
union undata
{
	int a;
	float b;
	char ch;
}ul;
void main()
{
	ul.a = 10;	
	printf("ul.a = %d \n",ul.a);
	ul.b = 34.6;
	printf("ul.b = %f \n",ul.b);
	printf("ul.a = %d \n",ul.a);
}
