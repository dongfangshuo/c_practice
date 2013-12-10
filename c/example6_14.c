#include <stdio.h>
#include <string.h>
void main() {
	char *p = "123456789",a[10],*k = a;
	while(1)
	{
	printf("please input the string \n");
	scanf("%s",k);
	printf("the input number is %s \n",k);
	printf("%s is ",p);
	if(strcmp(p,k) == 0 )
	{
		printf("equipted");
		break;
	}else if(strcmp(p,k) > 0 )
	{
		printf("larger ");
	}else
	{
		printf("smaller ");	
	}
	putchar('\n');
	}
	
}
