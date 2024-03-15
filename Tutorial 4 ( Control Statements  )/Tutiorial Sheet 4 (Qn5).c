#include<stdio.h>
#include<conio.h>
void main()

{
	int Num1,Fact,i;
	printf("Enter any number ");
	scanf("%d",&Num1);
	
	Fact=1;
	
	for(i=1; i<=Num1 ;i =i+1)
	{
		Fact=Fact*i;
	}
	printf("Factorial is %d",Fact);
	getch();
}
