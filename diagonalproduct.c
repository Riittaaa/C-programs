#include<stdio.h>
#include<conio.h>
void main ()
{
	int mat[4][4],i,j,product=1;
	printf("Enter the elements:");
	for(i=0;i<4;i++);
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	
	for(i=0;i<4;i++);
	{
		for(j=0;j<4;j++)
		{
			if(i==j)
			{
				printf("product=product*mat[i][j]");
			}
		}	
	}
	printf("Product of the diagonal elements=%d",product);
}
