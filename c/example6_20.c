#include <stdio.h>
void main()
{
	char chars[5],*p[5],*k;	
	k = chars;
	int i = 0;
//	while(1)
///	{
//		if( i >= 5)
//		{
//		 break;
//		}
//		*(k+i) = getchar();
//		if(k[i] == '\n')
	//	{
	//		continue;	
	//	}
	//	i++;
	//}
	do
	{
		k[i] = getchar();
		if(k[i] == '\n')
		{
			continue;	
		}
		i++;
	}while(i < 5);
	k = chars;
	for(i = 0;i < 5;i++)
	{
		printf("%c \n", k[i]);	
		p[i] = &k[i];	
	}
	for(i = 0;i < 5;i++)
	{
		printf("%c \n", *p[i]);	
	}
	
}
