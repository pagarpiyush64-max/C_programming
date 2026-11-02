///////////////////////////////////////////////////////////////////
//
//  Function Name : table
//  Description   : Display the Patter
//  Input         : 3
//  Output        : *  *  *  #  #  #  
//  Author        : Piyush Pagar
//  Date          : 31/10/2026
//
///////////////////////////////////////////////////////////////////
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        printf("*\t");
    }
    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        printf("#\t");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}