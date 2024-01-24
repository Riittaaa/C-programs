#include<stdio.h>
int main ()
{
	char name[20];
	printf("Enter your name:\n");
	scanf("%[A-Z]",name);
	printf("Your name is %s",name);
	return 0;
}
