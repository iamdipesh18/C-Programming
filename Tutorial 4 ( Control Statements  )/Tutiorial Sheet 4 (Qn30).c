#include<stdio.h>
#include<conio.h>
int main()
{
     //For initializing variables
      int start, end, i, temp1, temp2, rem, n = 0, result = 0;
     //user give start and end point of a number
    printf("Insert the start value and end value :");
    scanf("%d %d", &start, &end);

    //to display pint of range
    printf("\n Armstrong nums between %d an %d are: ", start, end);

     //for use this loop to store all number in given range
    for(i = start + 1; i < end; i=i+1)
    {
         //store a duplicity value of given range
         temp2 = i;
         temp1 = i;

      while (temp1 != 0)
      {
           //temp1 /= 10;
           temp1=temp1/10;
            n=n+1;
      }
      while (temp2 != 0)
      {
         rem = temp2 % 10;
         //result += pow(rem, n);
        result=result+pow(rem,n);
       //temp2 /= 10;
         temp2=temp2/10;
      }
      //check true condition if result is equal to i
        if (result == i)
        {
            //display
            printf("%d ", i);
        }
         n = 0;
       result = 0;
   }
    printf("\n");
  return 0;
}
