#include <stdio.h>
#include <stdlib.h>
void main()
{
	char buf[50];
	FILE *fp;
	if((fp = fopen("/home/pengjv/pp.java","r")) == NULL)
	{
		printf("can not open this file \n");	
		exit(0);
	}
	while(!feof(fp))
	{
	fgets(buf,50,fp);	
	fputs(buf,stdout);
	}
	fclose(fp);
}
