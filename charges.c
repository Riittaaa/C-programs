#include<stdio.h>
#include<conio.h>
void main()
{
	int custnum,units;
	float charges;
	printf("Enter customer number and unit consumed:");
	scanf("%d%d",&custnum,&units);
	
	if(units<=200)
	{charges=0.5*units;
	}
	else if(units<=400)
	{charges=100+0.65*(units-200);
	}
	else if(units<=600)
	{charges=230+0.8*(units-400);
	}
	else
	{charges=390+(units-600);
	}
	printf("Customer number=%d charges=%f",custnum,charges);
	getch();
}


