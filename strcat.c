#include<stdio.h>
#include<string.h>
void main ()
{
	char first_name[30]="Ramesh";
	char last_name[]="Adhikari";
	strcat(first_name,last_name); 
	puts(first_name); 
	getch(); 
}
