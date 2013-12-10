#include <stdio.h>
#include "Included.c"
void arrayTest()
{
	int kk[] = {34,234,2,45,34,34,23},*d = kk;
	int *p = &kk[1];
	printf("kk[0]=%d,%d,%d",*d,*(d+0),d[0]);
}
void kkl()
{
	int a,b,c,*q,*w,*e;
	q = &a;
 	w = &b;
	e = &c; 	
	scanf("%d,%d,%d",q,w,e);	
	if(*q > *w)
	{
		printf("*q>*w as %d>%d",a,b);	
	}else
	{
		printf("*q<*w as %d<%d",b,a);
	}
	putchar('\n');
}
void main()
{
    int i=10,*j,*k;
	int p[]={34,45};
	j = &i;
	k = &p[0];
	printf("i = %d,k=%d i+k = %d\n",*j,*k,(*j+*k));
	printf("kkkkkkkkkkkk\n");
//	kk();
//	arrayTest();
	included();
}
