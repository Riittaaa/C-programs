#include<stdio.h>
#include<conio.h>
void main()
{
	struct stu
	{
		char name[50];
		int roll,marks;
		char remarks[10];
	}s1,s2;
	printf("Enter the name, roll, marks and remarks of the student:");
	scanf("%s%d%d%s",&s1.name,&s1.roll,&s1.marks,&s1.remarks);
	printf("%s of %d roll scored %d marks with %s result.\n",s1.name,s1.roll,s1.marks,s1.remarks);
	scanf("%s%d%d%s",&s2.name,&s2.roll,&s2.marks,&s2.remarks);
	printf("%s of %d roll scored %d marks with %s result.\n",s2.name,s2.roll,s2.marks,s2.remarks);
}
