#include <stdio.h>

int main()
{
    int i, j, num,count;
    printf("Enter any number to print Prime factors: ");
    scanf("%d", &num);

    for (i=1;i<=num;i=i+1)
    {
    	if(num%i==0)
    	{
    		count=0;
    		for(j=1;j<=i;j=j+1)
    		{
    			if(i%j==0)
    			{
    				count=count+1;
				}
			}
			if(count==2)
			{
				printf("%d \t",i);
			}
		}
	}
	getch();
}
