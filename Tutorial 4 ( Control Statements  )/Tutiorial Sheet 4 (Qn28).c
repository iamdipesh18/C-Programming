#include<stdio.h>
#include<conio.h>
void main()
{
    int i,SN,GN,Num1,Num2,Hcf,Lcm;
    printf("Enter First Number");
    scanf("%d",&Num1);
    printf("Enter Second Number");
    scanf("%d",&Num2);
    if(Num1>Num2)
    {
    	SN=Num2;
    	GN=Num1;
	}
	else
	{
		SN=Num1;
		GN=Num2;
	}
	for(i=SN;i>=1;i=i-1)
    {
	    if(GN%i==0 && SN%i==0)
	    {
	    Hcf=i;
	    break;
	    }
    }
	Lcm=(Num1*Num2)/Hcf;
	printf("Hcf is %d \n",Hcf);
	printf("Lcm is %d",Lcm);
	getch();
}

