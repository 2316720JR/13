#include <stdio.h>
#include <stdlib.h>


struct student
{
	int ID;
	char name[100];
	float grade;
};

int main(void)
{
	struct student s1 = {123, "Juri", 2.5};
	
	s1.ID = 123456;
	s1.name[0] = 'c';
	s1.grade = 3.2;
	
	printf("ID:%i\n", s1.ID);
	printf("name:%s\n", s1.name);
	printf("score : %f\n", s1.grade);
	
	return 0;
}

