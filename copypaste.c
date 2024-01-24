#include<stdio.h>
void main()
{
	char copy[50],paste[50];
	int i;
	printf("Enter your name (to copy):");
	gets(copy);
	for(i=0;copy[i]!='\0';i++)
	{
		paste[i]=copy[i];
	}
	paste[i]='\0';
	printf("The name is (pasted as):");
	puts(paste);
}
