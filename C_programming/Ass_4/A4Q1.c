#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int iNo)
{
    if(iNo==0)
    {
        printf("Zero");
    }
    else if(iNo<0)
    {
        printf("It is Negative");
    }
    else
    {
       printf("It is Positive"); 
    }
}

int main()
{
    int iValue=0;
  
    printf("Enter the number to check Zero,Positive,Negative:");
    scanf("%d",&iValue);

    CheckNumber(iValue);


    return EXIT_SUCCESS;
}