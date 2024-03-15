#include<stdio.h>
#include<conio.h>
void main()
{
	int Num,Sum=0;
	char Ch;
	do
	{
		printf("ENter a Number");
		scanf("%d",&Num);
		Sum=Sum+Num;
		printf("Press Y to continue");
		fflush(stdin);
		scanf("%c",&Ch);
	}   while(Ch=='Y');
	printf("Sum is %d \n",Sum);
	getch();
		
}
