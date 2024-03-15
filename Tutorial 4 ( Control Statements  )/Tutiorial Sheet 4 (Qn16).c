#include<stdio.h>
#include<conio.h>
void main()
{
	int i,Num,ft,st,nt;
	printf("Number of fibonicci Series to be displayed");
	scanf("%d",&Num);
	ft=0;
	st=1;
	printf("%d \n%d \n",ft,st);
	for(i=1;i<=Num-2;i=i+1)
	{
		nt=ft+st;
		printf("%d \n",nt);
		ft=st;
		st=nt;
		
		
	}
getch();	
	
}
