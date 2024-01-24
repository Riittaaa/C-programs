#include<stdio.h>
int main()
{
	int i,j=10;
	for(i=0;i<=j;i++)
	{
		if(i==5)
		{
			continue;
		}
		printf("%d\n",i);
	}
	return 0;
}
