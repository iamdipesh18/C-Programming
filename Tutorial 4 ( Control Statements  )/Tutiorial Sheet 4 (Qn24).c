#include<stdio.h>
#include<conio.h>
void main()
{
	int Num,Rev,Rem,Fo;
	printf("Enter any inter digit ");
	scanf("%d",&Num);
	Fo=Num;
	while(Num!=0)
	{
        Rem=Num%10;
        Rev=Rev*10+Rem;
        Num=Num/10;
	}
	if(Fo==Rev)
	{
		printf("Entered Number is Palindrome ");
		
	}
	else
	{
		printf("Entered Number is Not Palindrome");
		
	}
getch();
	
}
