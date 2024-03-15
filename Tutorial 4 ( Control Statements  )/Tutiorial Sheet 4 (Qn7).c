#include<stdio.h>
#include<conio.h>
void main()
{
	int A,B,Sum;
	char Ch;
	do
	{
		Sum=0;
		printf("ENter 1st Number");
		scanf("%d",&A);
		printf("ENter 2nd Number");
		scanf("%d",&B);
		Sum=A+B;
		printf("Sum is %d \n",Sum);
		printf("Press Y to continue");
		fflush(stdin);
		scanf("%c",&Ch);
	}   while(Ch=='Y');

	getch();
		
}
