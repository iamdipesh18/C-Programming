#include<stdio.h>
#include<conio.h>

void main()
{
	int LR, UR, number, sum, fact, rem, i, j;
	printf("Enter LR: ");
	scanf("%d", &LR);
	printf("Enter UR: ");
	scanf("%d", &UR);
	
	for(i=LR; i<=UR; i++)
	{
	    number = i;
		sum = 0;
	    while(number != 0)
		{
			rem = number%10;   
			fact = 1;
			for(j=1;j<=rem; j++)
			{
			    fact = fact * j;
			}
			
			sum = sum + fact;
			
			number = number/10;
		}
		if(sum == i)
		{
		   	printf("%ld\t", i);
		}
	}
	getch();
}
