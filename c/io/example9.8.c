#include <stdio.h>
#include <stdlib.h>
void main()
{
	FILE *fp; 
	int i; 
	char s[3][100];
	for(i = 0;i < 3;i++)
	{
		gets(s[i]);	
	}
	if((fp = fopen("/home/pengjv/kk.txt","w+")) == NULL)
	{
		printf(" can not open the file \n ");	
		exit(0);
	}
	for(i = 0;i < 3;i++)
	{
		fputs(s[i],fp);	
	}
	fclose(fp);
}
