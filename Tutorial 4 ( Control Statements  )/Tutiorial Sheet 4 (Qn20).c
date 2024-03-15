#include<stdio.h>
#include<conio.h>
#include<math.h>
void main ()
{
	int Square,Cube,i;
	
	for(i=1;i<=10;i=i+1)
	{
		Square=pow(i,2);
		Cube=pow(i,3);
		printf("%d\t%d\n",Square,Cube);
	}
	getch();
}
