#include<stdio.h>
#include<conio.h>
void main()
{
	int Num,Rem,Sum=0,i;
	printf("Enter a number");
	scanf("%d",&Num);
	for(i=1;i<=(Num-1);i=i+1)
	{
		Rem=Num%i;
		if(Rem==0)
		{
			Sum=Sum+i;
		}
	}
	if(Sum==Num)
	{
		printf("Entered number is perfect");
		
	}
	else
	{
		printf("Entered number is not perfect");
	}
	getch();
	
}
