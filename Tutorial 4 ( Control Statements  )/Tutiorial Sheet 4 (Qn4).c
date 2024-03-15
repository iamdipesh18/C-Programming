#include <stdio.h>
void main()
{ 
    float per; 
    printf("Enter Percentage: ");
    scanf("%f",&per);

    if(per >= 80)
    {
        printf("Distinction");
    }
    else if(per >= 60)
    {
        printf("First Division");
    }
    else if(per >= 45)
    {
        printf("Second Division");
    }
    else if(per >= 32)
    {
        printf("Third Division");
    }

    else
    {
        printf("Fail");
    }
getch();

}
