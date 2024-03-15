#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int Dec,Num,i=1,Rem,Bin=0;
	printf("Enter a decimal value");
	scanf("%d",&Dec);
	
	while(Dec!=0)
	{
		Rem=Dec%2;
		Bin=Bin+Rem*i;
		Dec=Dec/2;
		i=i*10;
	}
	printf("Equivalent binary value is %d",Bin);
	getch();
}
