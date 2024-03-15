#include<stdio.h>
#include<conio.h>
void main()
{
	int Num,Rem;
	
	printf("Enter a number ");
	scanf("%d",&Num);
	
	Rem=Num%2;
	
	if(Rem==0)
	{
		printf("Entered number is even");
	}
	else
	{
		printf("Entered number is odd");

	}
    getch();
}
