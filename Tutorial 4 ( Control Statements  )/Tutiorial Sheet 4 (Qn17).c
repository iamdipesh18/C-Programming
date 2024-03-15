1#include<stdio.h>
#include<conio.h>
void main()
{
	int Num,Sum,Rem;
	printf("Enter any integer digit ");
	scanf("%d",&Num);
	
    Sum=0;
	while(Num!=0)
	{
	    
		Rem=Num%10;
		Sum=Sum+Rem;
		Num=Num/10;
	}
	
	printf("Sum is %d ",Sum);
	getch();
	
}
