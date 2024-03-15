#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int Num,Rem,Arm=0,FO,Count=0,Dip;
	printf("Enter any digit ");
	scanf("%d",&Num);
	FO=Num;
	Dip=FO;
	while(Num!=0)
	{
		
		Num=Num/10;
		Count=Count+1;
	}
	
	while(Dip!=0)
	{
		Rem=Dip%10;
		Arm=Arm+pow(Rem,Count);
		Dip=Dip/10;
	}
	if(FO==Arm)
	{
		printf("Armstrong Number");
	}
	else
	{
		printf("Not Armstrong Number");
	}
	getch();
}
