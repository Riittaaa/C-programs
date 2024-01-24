#include<stdio.h>
int main()
{
int i=0;
float avg=0,sum=0;
int arry[10]={1,2,3,4,5,6,7,8,9,10};
while(i<10)
{
sum=sum+arry[i];i++;
}
avg=sum/10;
printf("The sum of elements of array is %.2f.\n",sum);
printf("The average of the sum of elements of the array is %.2f.\n",avg);
}
