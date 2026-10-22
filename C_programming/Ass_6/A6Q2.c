#include<stdio.h>
#include<stdlib.h>

void CheckYearLeap(int iYear)
{
    if( iYear%400==0 || iYear%4==0 && iYear%100!=0 )
    {
        printf("Leap year");
    }
    else
    {
       printf("Not a Leap year");
    }
}

int main()
{
    int iYear=0;
  
    printf("Enter the year to check leap or not :");
    scanf("%d",&iYear);

    CheckYearLeap(iYear);


    return EXIT_SUCCESS;
}