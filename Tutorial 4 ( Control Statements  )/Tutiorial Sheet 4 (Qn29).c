#include<stdio.h>
#include<conio.h>
void main()
{
	int LR,UR,i,j,Rem,Count;
	
	printf("Enter Lower Range");
	scanf("%d",&LR);
	printf("Enter Upper Range");
	scanf("%d",&UR);
	printf("Prime Numbers between the range and including range is\n ");
	Count=0;
	
	for(j=LR;j<=UR;j=j+1)
	{
		Count=0;
		for(i=1;i<=j;i=i+1)
		{
			if(j%i==0)
			{
				Count=Count+1;
			}
		}
		if(Count==2)
		{
			printf("%d\t",j);
		}
	}
	getch();
}
