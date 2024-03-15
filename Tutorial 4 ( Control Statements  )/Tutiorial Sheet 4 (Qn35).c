#include<stdio.h>
#include<conio.h>
void main()
{
	int N,Sum=0,i;
	printf("Enter any number");
	scanf("%d",&N);
	i=1;
    do
    {
	    Sum=Sum+i;
	    i=i+1;
	}while(Sum<N);
    if(Sum==N)
    {
	    printf("Triangular");
    }
        else
    {
	    printf("Not Triangular");
    }
	getch();
}
