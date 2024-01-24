#include<stdio.h>
int main ()
{
	int a[3][2],n,i,j,
	printf("Enter the elements of array:");
	scanf("%d"&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("The elements of array are:");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",a[i][j]);
		}
	}
	return 0;
}
