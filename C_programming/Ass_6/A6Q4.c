#include<stdio.h>
#include<stdlib.h>

void CheckMultipleDivisibility (int iNo)
{
    if(iNo%3==0 && iNo%5==0)
    { 
        printf(" Divisible by both 3 and 5 ");
    }
    else if(iNo%3==0)
    {
        printf(" Divisible by 3 ");
    }
    else if(iNo%5==0)
    {
         printf(" Divisible by 5 ");
    }
    else 
    {
         printf(" Not divisible by Both");
    }
}

int main()
{
    int iValue=0;
  
    printf("Enter the number :");
    scanf("%d",&iValue);

    CheckMultipleDivisibility(iValue);


    return EXIT_SUCCESS;
}