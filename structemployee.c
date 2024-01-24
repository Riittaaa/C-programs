#include<stdio.h>
#include<conio.h>
void main ()
{
	struct employee
	{
		char name[20];
		int age;
		float salary;
	}e1,e2;
	printf("Enter name,age and salary of the employees:");
	scanf("%s%d%f",&e1.name,&e1.age,&e1.salary);
	scanf("%s%d%f",&e2.name,&e2.age,&e2.salary);
	printf("Employee details\n");
	printf("%s\t%d\t%.f\t",e1.name,e1.age,e1.salary);
	printf("%s\t%d\t%.f\t",e2.name,e2.age,e2.salary);
}
