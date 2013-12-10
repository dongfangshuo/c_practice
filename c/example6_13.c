#include <stdio.h>
void main()
{
	char *p ="dfsdvsrfgwergwervsadvarqvqer";
	int n;
	for(n = 0;*(p+n) != '\0';n++);
	printf("the length of this char[] is %d \n",n);
	for(n = 0;p[n] != '\0';n++);
	printf("the length of this char[] is %d \n",n);
	for(n = 0;*p++ != '\0';n++);	
	printf("the length of this char[] is %d \n",n);
}
