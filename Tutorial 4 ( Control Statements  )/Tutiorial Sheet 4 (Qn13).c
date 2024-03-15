#include<stdio.h>
#include<conio.h>
void main()
{
	int Unit;
	float Charge;
	printf("Enter the number or unit consumed");
	scanf("%d",&Unit);
	
	if(Unit<=20)
	{
		Charge=80;
	}
	else if (Unit>20 && Unit<=120)
	{
		Charge=80+(Unit-20)*7.30;
	}
	else
	{
		Charge=80+(Unit-20)*7.30+(Unit-120)*9.00;
	}
	printf("Total Charge is %f",Charge);
	getch();
	
}
