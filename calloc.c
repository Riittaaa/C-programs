#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *p,i,n,sum=0;
	printf("Enter the value for n=");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	if(p==NULL)
	{
		printf("NO memory");
	}
	
	
		printf("Array elements are:\n");
		
			for(i=0;i<n;i++)
	{
		scanf("%d\n",p+i);
		sum+=*(p+i);
		
	}
	printf("Sum=%d",sum);
	free(p);
}
