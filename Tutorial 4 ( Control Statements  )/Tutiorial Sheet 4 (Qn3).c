#include<stdio.h>
#include<conio.h>
void main()
{
	int Num1,Num2,Num3;
	
	printf("Enter first number ");
	scanf("%d",&Num1);
	printf("Enter second number ");
	scanf("%d",&Num2);
	printf("Enter third number ");
	scanf("%d",&Num3);
	
	if(Num1>Num2)
	{
		if(Num1>Num3)
		{
			printf("%d is the largest number among them",Num1);
		}
		else
		{
			printf("%d is the largest number among them",Num3);
		}
	}
	else
	{
		if(Num2>Num3)
		{
			printf("%d is the largest number among them",Num2);
		}
		else
		{
			printf("%d is the largest number among them",Num3);
		}
	}
	getch();
}
