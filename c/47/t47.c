#include <stdio.h>
#include <stdlib.h>
void no25();
// convert decimal to binary 
void myitoa(int i ,char * p )
{

}
void no28()
{
	char a =3,b = 6,c,str[100],*p = str;	
	c = (a ^ b) << 2;
//	itoa(c,p,10);
	printf("the char is %d,and the number is %s \n",c,p);
}
void no27()
{
	printf("12 | 012 = %d \n",12 | 012);
}
void no17()
{
	int a = 3;
	printf("a+= a -= a*a = %d \n",a+= a -= a*a);
}
void main()
{
	//no17();
//	no25();
//  	no27();	
	no28();
}
void no25()
{
	char ch = 'A';
	ch = (ch >= 'A' && ch <= 'Z')? ch +32 :ch;
	printf("ch = (ch >= 'A' && ch <= 'Z')? ch +32 :ch= %c \n",ch);
}
