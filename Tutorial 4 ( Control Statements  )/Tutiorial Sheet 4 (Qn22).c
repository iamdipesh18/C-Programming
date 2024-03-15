#include<stdio.h>
#include<conio.h>
void main()
{
	int num,sum=0,i,fact,temp,rem;
	printf("Enter a number ");
	scanf("%d",&num);
	temp=num;
	while(num!=0)
	{
		rem=num%10;
		fact=1;
		for(i=1;i<=rem;i=i+1)
		{
			fact=fact*i;
		}
		num=num/10;
		sum=sum+fact;
	}
	if(temp==sum)
	{
		printf("Strong Number");
	}
	else
	{
		printf("Not a Strong Number");
	}
	getch();
}
