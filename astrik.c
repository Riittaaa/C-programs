#include<stdio.h>
int main ()
{
	int row,j,n,space;
	printf("Enter the required number of rows:");
	scanf("%d",&n);
		for(row=1;row<=n;row++)
		{
			for(space=1;space<=n-row;space++)
			{
				printf(" ");
			}
		for(j=1;j<=row*2-1;j++)
		{
			printf("*");
		}
		printf("\n");
		}
		return 0;
}
