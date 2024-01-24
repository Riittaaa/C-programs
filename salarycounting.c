#include<stdio.h>
void main ()
{
	int a[100],n,i,c=0;
	printf("No. of employees:");
	scanf("%d",&n);
	for(i=0;i<n;i++);
	{
		printf("Enter the salary:%d",i+1);
		scanf("%d",&a[i]);
	}
		for(i=0;i<n;i++);
		{
		if(a[i]>10000 && a[i]<15000)	
			{
				c=c+1;
			}
		}
	
	printf("The no. of employees with salary between 10000 and 15000=%d",c);		
	
}
