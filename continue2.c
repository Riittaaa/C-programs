#include<stdio.h>
#include<conio.h>
void main()  
{  
int i,num; 
 printf("\n Enter a number:"); 
 scanf("%d", &num);  
printf("\n The even numbers from 2 to %d are:\n", num);  
for(i=1;i<=num;i++)
  {  if(i%2!=0)  
  {  continue;  }  
  printf("%d\t", i); 
   } 
 getch();  } 
