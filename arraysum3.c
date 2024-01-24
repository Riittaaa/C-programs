#include<stdio.h>
void main()
{
	int *p,n,i,a[100],sum=0;
	p=&a[n];
	printf("Enter limit:");
	scanf("%d",&n);
	
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",(a+i));
		sum=sum+*(a+i);
	}
	printf("Sum=%d",sum);
}
