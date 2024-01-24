#include<stdio.h>
int main ()
{
int arr[5],i,sum=0;
for(i=0;i<5;i++)
{
printf("\nEnterthe element for arr[%d]",i);
scanf("%d",&arr[i]);
}

for(i=0;i<5;i++)
sum=sum+arr[i];
printf("Sum is %d.",sum);
return 0;
} 

