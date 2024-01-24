#include<stdio.h>
int main ()
{
	int age[100],i,n,c=0;
	printf("No. of students=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the age:");
		scanf("%d",&age[i]);
		if(age[i]>15 && age[i]<22)
		{
			c=c+1;
		}
		
	}
	printf("There are %d students of age between 15 and 22",c);
	return 0;
}
