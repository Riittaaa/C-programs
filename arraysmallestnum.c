#include<stdio.h>
#include<conio.h>
int main ()
{
int a[100],i,n,smallest;
printf("How many numbers:");
scanf("%d",&n);
printf("Enter the numbers:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
smallest=a[0];
for(i=0;i<n;i++)
{
if(smallest>a[i])
{
smallest=a[i];
}
}
printf("Smallest number=%d",smallest);
getch();
}
