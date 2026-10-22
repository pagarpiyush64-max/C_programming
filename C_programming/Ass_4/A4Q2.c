#include<stdio.h>
#include<stdlib.h>

void CheckEvenOdd(int iNo)
{
    if((iNo%2)==0)
    {
        printf("It is Even");
    }
    else
    {
       printf("It is Odd"); 
    }
}

int main()
{
    int iValue=0;
  
    printf("Enter the number to check Even or Odd:");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);


    return EXIT_SUCCESS;
}