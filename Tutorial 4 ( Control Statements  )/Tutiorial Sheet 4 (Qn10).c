#include<stdio.h>
#include<conio.h>
void main()
{
	int Num,Rem,i,Count;
	
	printf("Enter any Number ");
	scanf("%d",&Num);
	Count=0;
	for(i=1;i<=Num;i=i+1)
	{
		Rem=Num%i;
		if(Rem==0)
		{
		
		 Count=Count+1;
        }
	}
	if(Count==2)
	{
		printf("Prime");
	}
	else
	{
		printf("Not Prime");
	}
	getch();
	
}
