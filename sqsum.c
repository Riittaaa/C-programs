#include<stdio.h>
#include<math.h>
void main()
{
	int num,i=1,sum=0;
	printf("Enter a number:");
	scanf("%d",&num);
	printf("The numbers are:");
	while(i<=num)
	{
		printf("%d\t",i);
		i++;
		
	}
	for(i=1;i<=num;i++)
	{
		sum=sum+pow(i,2);
	}
	printf("\nTotal sum of squares=%d",sum);
}
