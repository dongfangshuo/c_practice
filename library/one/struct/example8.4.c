#include <stdio.h>
struct stud
{
	int num;
	char *name;
	char sex;	
	float score;
}boy1={102,"zhang zhang",'M',34.5},*pst;
void main()
{
	 pst = &boy1; 	
	 printf("boy1 name is %s \n",(*pst).name);
       	 printf("boy1 sex  is %c \n",pst->sex);
	 printf("boy1 score is %f \n",boy1.score);
	 printf("boy1 num is %d \n",(*pst).num);
}
