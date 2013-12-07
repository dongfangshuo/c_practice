#include  <stdio.h>
void main()
{
	char *p="ghjkldfsfdfsfvs",*l; 	
	int n;
	l = "yyyyyyyyyyyyyyyyyyyyyyyyyyy";
	printf("the num to show is %s \n", p);
	while(*p++ != '\0')
	{
		putchar(*(p-1));	
		printf("\n");
	}
	printf("the num to show is %s \n", l);
	for(n = 0;*(l+n) != '\0';printf("%c \n",*(l+n)),n++); 
	printf("the num to show is %s \n", l);
}
