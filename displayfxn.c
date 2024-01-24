#include<stdio.h>
#include<conio.h>
void display(int,int);
void main()
{
	int a[]={1,3,5,7,9};
	printf("The elements passed are:\n");
	display(a[2],a[0]);
}
void display(int m,int n)
{
	printf("%d\t%d",m,n);
}
