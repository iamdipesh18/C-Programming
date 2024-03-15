#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int num1,num2,sum,dif,mul,Rem;
	char ch;
	float div;
	
	printf("Enter first number ");
	scanf("%d",&num1);
	printf("Enter second number ");
	scanf("%d",&num2);
	fflush(stdin);
	printf("What do you wanna operate? ");
	fflush(stdin);
	scanf("%c",&ch);
	
	switch (ch)
	{
		case '+' :
			sum=num1+num2;
			printf("Sum is %d",sum);
			break;
			
			case '-' :
				dif=num1-num2;
				printf("Difference is %d",dif);
				break;
				
				case '*' :
					mul=num1*num2;
					printf("Multiplication is %d",mul);
					break;
					
					case '/' :
						div=(float)num1/num2;
						printf("Division is %f",div);
						break;
						
						case '%' :
							Rem=num1%num2;
							printf("Remainder is %d",Rem);
							break;
						
						          default:
							      printf("Enter valid operator");
							
	}
	getch();
}
