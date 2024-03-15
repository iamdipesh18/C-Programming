#include<stdio.h>
#include<conio.h>
int main()
{
	int LR,UR,i,j,Sum,Num;
	printf("Enter Lower Range");
	scanf("%d",&LR);
	printf("Enter Upper Range");
	scanf("%d",&UR);
	
	for(j=LR;j<=UR;j=j+1)
	{
		Sum=0;
		Num=j;
		for(i=0;i<Num;i=i+1)
		{
			Sum=Sum+i;
			if(Sum==j)
			{
				printf("%d \n",j);
			}
		}
	}
	getch();
	return (0);
}

