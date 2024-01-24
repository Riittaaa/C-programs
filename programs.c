#include<stdio.h>
#include<conio.h>
void main()
{
	struct stu
	{
		char name[50];
		int marks;
		char grade;
	}
	s1={"Rm",99,'A'},s2={"Jin",89,'A'},s3={"Sita",130,'B'},s4={"Gopal",150,'A'};
	printf("%s scored %d marks with %c grade.\n",s1.name,s1.marks,s1.grade);
	printf("%s scored %d marks with %c grade.\n",s2.name,s2.marks,s2.grade);
	printf("%s scored %d marks with %c grade.\n",s3.name,s3.marks,s3.grade);
		printf("%s scored %d marks with %c grade.\n",s4.name,s4.marks,s4.grade);
}
