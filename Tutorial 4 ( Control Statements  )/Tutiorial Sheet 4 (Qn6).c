#include<stdio.h>
#include<conio.h>
void main()
{
	int Num,Sum,i;
	printf("Enter a number");
	scanf("%d",&Num);
	Sum=0;
	
	for(i=0;i<=Num;i=i+1)
	{
		Sum=Sum+i;
    }
    printf("Sum is %d",Sum);
    getch();
}
