#include<stdio.h>
int main ()
{
	int a[100],n,sum=0,i;
	float ave=0;
	printf("Numbers:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the numbers:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++);
	{
	sum=sum+a[i];	
	}	
	printf("Sum=%f",sum);
	ave=(float)sum/n;
	printf("The average=%f",ave);
	return 0;
}
