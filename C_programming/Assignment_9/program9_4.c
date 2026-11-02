///////////////////////////////////////////////////////////////////
//
//  Function Name : OddFactorial
//  Description   : Display the Odd Factorial of Number 
//  Input         : 5
//  Output        : (5*3*1)=15
//  Author        : Piyush Pagar
//  Date          : 31/10/2026
//
///////////////////////////////////////////////////////////////////


#include<stdio.h>

int Oddfactorial(int iNo)
{
    int iCnt = 0;
    int iFact=1;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=1; iCnt<=iNo; iCnt++)
    {    
        if(iCnt%2!=0)
        {   
            iFact=iFact*iCnt;
        }
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet=0;
    printf("Enter number");
    scanf("%d", &iValue);

    iRet=Oddfactorial(iValue);

    printf("Odd factorial of Number:%d",iRet);

    return 0;
}