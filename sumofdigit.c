#include<stdio.h>
#include<conio.h>
void main()
{
	int x,sum;
	printf("Enter a two digit number:");
	scanf("%d",&x);
	if(x<100)
	{
		sum=(x/10)+(x%10);
	}
	printf("Sum=%d",sum);
}
