#include<stdio.h>
#include<conio.h>
void main ()
{
	int num[50],i,j,n,temp;
	printf("How many numbers to sort?=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&num[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(num[i]>num[j])
			{
				temp=num[i];
				num[i]=num[j];
				num[j]=temp;
			}
		}
	}
	printf("The numbers in ascending order are:");
	for(i=0;i<n;i++) 
	printf("\t%d",num[i]); 
	
}
