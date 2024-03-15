#include<stdio.h>
#include<conio.h>
void main()
{
	int LR,UR,i,j,Sum,N;
	printf("Enter Lower Range");
	scanf("%d",&LR);
	printf("Enter Upper Range");
	scanf("%d",&UR);
	
	for(j=LR;j<=UR;j=j+1)
	{
		Sum=0;
		for(i=1;i<=j/2;i=i+1)
		if(j%i==0)
		{
			Sum=Sum+i;
		}
		if(Sum==j)
		{
			printf("%d \n",j);
		}
	}
	getch();
}
	
