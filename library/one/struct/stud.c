#include <stdio.h>
struct stud
{
	int num;
	char name[20];
	float score;
}stud1,stud2 = {66,"good",12l}; 
void main()
{
	stud1.num = 5;
	printf("%d \n",stud1.num);
	printf("stud2.num = %d ,stud2.name = %s,stud2.score = %f\n",stud2.num,stud2.name,stud2.score);
	
}
