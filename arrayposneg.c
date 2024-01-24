#include<stdio.h>
void main ()
{
	int a[5],n,count_neg=0,count_pos=0,i,even=0,odd=0;
	printf("Enter the size of the array:\n");
	scanf("%d",&n);
	printf("Enter the elements of array:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		count_neg++;
		else 
		count_pos++;
	}
		for(i=0;i<n;i++)
		{
		if(a[i]%2==0)
		even++;
		else
		odd++;
		}
		
	
	
	printf("There are %d negative numbers in the array.\n",count_neg);
	printf("There are %d positive numbers in the array.\n",count_pos);
	printf("there are %d even numbers in the array.\n",even);
	printf("there are %d odd numbers in the array.\n",odd);
}


