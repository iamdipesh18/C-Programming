#include <stdio.h>
 
void main()
{
    int  Num, Bin, Dec = 0, Power = 1, Rem;
 
    printf("Enter a binary number : ");
    scanf("%d", &Num); 
    Bin = Num;
    while (Num > 0)
    {
        Rem = Num % 10;
        Dec = Dec + Rem * Power;
        Num = Num / 10 ;
        Power = Power * 2;
    }
    printf("decimal equivalent is = %d ",Dec);
    getch();
}
