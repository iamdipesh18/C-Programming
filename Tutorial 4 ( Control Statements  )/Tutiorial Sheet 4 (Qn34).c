#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float a,b,c,R,R1,R2,Real,Img,d;
	printf("Enter value of a ");
	scanf("%f",&a);
	printf("Enter value of b ");
	scanf("%f",&b);
	printf("Enter value of c ");
	scanf("%f",&c);
	
	d=pow(b,2)-(4*a*c);
	
	if(d==0)
	{
		printf("The roots are real and equal \n");
		R=(-b)/(2*a);
		printf("The root is %f",R);
	}
	else if (d>0)
	{
		printf("The roots are real but unequal \n");
		R1=(-b+sqrt(d))/(2*a);
		R2=(-b-sqrt(d))/(2*a);
		printf("First root is %f \n",R1);
		printf("Second root is %f ",R2);
	}
	else
	{
		printf("The roots are imaginary and unequal \n");
		d=-d;
		Real=-b/(2*a);
		Img=sqrt(d)/(2*a);
		printf("First root is %f + i %f \n",Real,Img);
		printf("Second root is %f - i %f ",Real,Img);
	}
	getch();
}
