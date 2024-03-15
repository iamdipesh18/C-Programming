#include<stdio.h>
#include<conio.h>
void main()
{
	int Min,Max,Num;
	char Ch;
	printf("Enter another Number");
	scanf("%d",Num);
	
	Max=Min=Num;
	printf("Wanna Continue???Press Y to continue");
	fflush(stdin);
	scanf("%c",&Ch);
	
	while(Ch=='Y')
	{
        printf("Enter another number");
        scanf("%d",&Num);
        if(Num>Max)
        {
        	Max=Num;
		}
		if(Num<Num)
		{
			Min=Num;
		}
		printf("Wanna Continue");
		fflush(stdin);
		scanf("%c",&Ch);
        }
        printf("Max= %d\n",Max);
        printf("Min= %d",Min);
        getch();
}
