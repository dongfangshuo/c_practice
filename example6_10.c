#include <stdio.h>
void main()
{
	int a[10],*k = a,l,p=0,*h=&p,w;	
	printf("this is an example of 6_10 \n");
	for(l = 0;l < 10;l++)
	{
//	notice :has \n will different with not 
	scanf("%d\n",k++);
	}
	k = a;
	for(l = 0;l < 10;l++)
	{
	printf("the number of %d is %d\n",l,*(k+l));	
	}
	printf("please input the number that what you search\n");
	scanf("%d",h);
	printf("the input number is %d \n",*h);
	l = 0;
	for(k =a;k < a+10;k++) 
	{
		w++;
		if(*h == *k)	
		{
			l = 1; 
			break;
		}
	}
	if(l)
	{
		printf("the index of number %d is %d ",*h,w-1);		
	}else{
		printf("Not Find");
	}
	putchar('\n');
}
