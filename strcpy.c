#include<stdio.h>
void main()
{
	char copy[50],paste[50];
	printf("Enter your name (to copy):");
	gets(copy);
	strcpy(paste,copy);
	printf("The name is (pasted as):");
	puts(paste);
}
