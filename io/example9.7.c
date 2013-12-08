#include <stdio.h>
#include <stdlib.h>
void copy(char *filename1,char *filename2)
{
	FILE *f1,*f2;
	if((f1 = fopen(filename1,"r")) == NULL)
	{
		printf("can not open file %s \n",filename1);
		exit(0);	
	}
	printf("f1 has open \n");
	if((f2 = fopen(filename2,"w+")) == NULL)
	{
		printf("can not open file %s \n",filename2);
		exit(0);
	}
	printf("f2 has open \n");
	while(!feof(f1))
	{
		fputc(fgetc(f1),f2);	
	}
	fclose(f1);
	fclose(f2);
}
void main()
{
	char *f1 = "/home/pengjv/java/pp.java";
	char *f2 = "/home/pengjv/pp2.java"; 
	copy(f1,f2);
}
