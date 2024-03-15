#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	printf("Enter any character");
	scanf("%c",&ch);
	
	if(ch>='A' && ch<='Z')
	{
		printf("Entered character is upper case \n");
		ch=ch+32;
		printf("Equivalent lower case is %c",ch);
	}
	else if (ch>='a' && ch<='z')
	{
		printf("Entered character is lower case\n");
		ch=ch-32;
		printf("Equivalent upper character is %c",ch);
	}
	else
	{
		printf("Enter valid character");
	}
	getch();
}
