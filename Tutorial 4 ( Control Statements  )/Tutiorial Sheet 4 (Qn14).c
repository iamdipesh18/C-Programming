#include<stdio.h>
#include<conio.h>
void main()
{
	int g;
	float S,TS;
	
	printf("Enter 1 for male 2 for female ");
	scanf("%d",&g);
	printf("Enter your salary ");
	scanf("%f",&S);
	
	if(g==1)
	{
		TS=(float)S+0.02*S;
		printf("The total salary after the addition of bonus is %f ",TS);
	}
	else
	{
		if(S>=5000)
		{
			TS=(float)S+0.05*S;
			printf("The total salary after the addition of bonus is %f ",TS);			
		}
		else
		{
			TS=(float)S+0.02*S;
		    printf("The total salary after the addition of bonus is %f ",TS);
		}
		
	}
	getch();
}
