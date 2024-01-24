#include<stdio.h>
void main()
{
	char str[]="TRIBHUVAN UNIVERSITY";
	int i,count=0;
	printf("TRIBHUVAN UNIVERSITY");
	for(i=0;i<=strlen(str);i++)
	{
		if(str[i]=='I')
		count++;
		
	}
	printf("\nTotal number of I=%d",count);
}
