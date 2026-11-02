///////////////////////////////////////////////////////////////////
//
//  Function Name : Factorial
//  Description   : Display the Factorial of Number 
//  Input         : None
//  Output        : None
//  Author        : Piyush Pagar
//  Date          : 31/10/2026
//
///////////////////////////////////////////////////////////////////


#include<stdio.h>

int factorial(int iNo)
{
    int iCnt = 0;
    int iFact=1;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=1; iCnt<=iNo; iCnt++)
    {       
        iFact=iFact*iCnt;
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet=0;
    printf("Enter number");
    scanf("%d", &iValue);

    iRet=factorial(iValue);

    printf("%d",iRet);

    return 0;
}