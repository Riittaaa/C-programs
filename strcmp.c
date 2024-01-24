#include<stdio.h>
#include<conio.h>
void main()
{
	char str1[10],str2[20];
	int value;
	printf("Enter the first string:");
	gets(str1);
	printf("Enter the second string:");
	gets(str2);
	value=strcmp(str1,str2);
	if(strcmp(str1,str2)==0)
	{
		printf("Strings are equal.");
	}
	else
	{
		printf("Strings are unequal.");
	}
}





