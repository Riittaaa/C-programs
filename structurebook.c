#include<stdio.h>
#include<conio.h>
void main()
{
	struct book
	{
		char name[30];
		int pages;
		float price;		
	};
	struct book b1={"Cprogramming",200,312.50};
	struct book b2={"IIT",176,300.50};
	struct book b3={"Digital Logic",100,120};
	printf("%s\t%d\t%.2f\n",b1.name,b1.pages,b1.price);
	printf("%s\t%d\t%.2f\n",b2.name,b2.pages,b2.price);
	printf("%s\t%d\t%.2f",b3.name,b3.pages,b3.price);
}







