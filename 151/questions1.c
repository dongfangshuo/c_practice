#include <stdio.h>
#include <string.h>
void test()
{
	int k ,*l = &k,*p,y; 
	scanf("%d",l);	
	 p = l;	
	y = *p;
	printf("==========%d\n", y);
}
void test3()
{
	char x = 'p', *px = &x,*u; 
//	&*x; --------------------------------error
	u = *&px;
	printf("%c \n",*u);
}
void test5()
{
	int a = 25,*x = &a; 
	printf("%d \n",**&x);
}
void test7()
{
	char kk[6],*p=kk;	
//	kk = p;    		------------error
}
void test8()
{
	int x[10], *p1 = x, *p2 = x+5;
//	p1 += p2; ---------------------------error
}
void test13()
{
	char a[10] = {"abcd"}, *p = a;	
	printf("%c \n",*(p+4));
}
void test15()
{
	char *p = "ABC"; 
	int len = strlen(p);
	printf(" the length of %s is  %d \n",p,len+ *p);
}
void test16()
{
	int a[] = {1,2,3},*b[2]; 
	b[0] = a+1;
	b[1] = a+2;
	printf("%d ,%d \n",*b[0],*b[1]);
}
void main()
{
	// test();	
//	test3();
	test5();
//	test7();
//	test8();
//	test13();
//	test15();
//	test16();
}
