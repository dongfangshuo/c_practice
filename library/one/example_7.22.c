#include <stdio.h>
//多维数组
void main()
{
	int a[][5] = {11,1,2,3,4,5,6,7,8,9};
	int *p,(*h)[3],i,j; 
	p = a;
	h = a;
	printf("please enter \n");
	scanf("%d,%d",&i,&j);
	printf("a[%d][%d] = %d \n",i,j,*(a[i]+j));
	printf("a[%d][%d] = %d \n",i,j,*(p+i*5+j));//important
	h = a + i;	
	printf("a[%d][%d] = %2d \n",i,j,(*h)[j]);//important
}
