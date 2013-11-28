#include <stdio.h>
void main()
{
	printf("test");
	int kk[]= {34,34,34,23,3,34,34,56,767,675,45},*ll=kk;
	int *index=&kk[4];
	printf("kk[%d] = %d",3,*(ll+3));
	putchar('\n');
	printf("kk[%d]= %d",4,*index);
	putchar('\n');
	printf("kk[%d]=%d",4+1,*(index+1));
	putchar('\n');	
	printf("get the number of index 3 : *(ll+3)=%d,*(kk+3)=%d,ll[3]=%d,kk[3]=%d",*(ll+3),*(kk+3),ll[3],kk[3]);
	putchar('\n');
	ll = ll+4;
	printf("ll+1=%d\n", *ll );
}
