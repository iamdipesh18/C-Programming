#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int Num,Sum=0,Count=0;
	float Ave;
	do	{
		printf("ENter a Number");
		scanf("%d",&Num);
		Sum=Sum+Num;
		Count=Count+1;
	}while(Num!=0);
	Ave=(float) Sum/Count;
	printf("Sum is %d \n",Sum);
	printf("Avergae is %.2f",Ave);
	getch();
	
}
