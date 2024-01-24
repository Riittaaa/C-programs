#include<stdio.h>
int main ()
{
	char string1[50];
	int length=0;
	printf("Enter the string:\t");
	gets(string1);
	length=strlen(string1);
	printf("\nThe length of the string is %d.",length);
	return 0;
}






