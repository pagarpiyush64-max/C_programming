///////////////////////////////////////////////////////////////////
//
//  Function Name : EvenFactorial
//  Description   : Display the factorial Differance Bitween Odd and even 
//  Input         : 5
//  Output        : (8-15)=-7
//  Author        : Piyush Pagar
//  Date          : 31/10/2026
//
///////////////////////////////////////////////////////////////////


#include<stdio.h>

int Evenfactorial(int iNo)
{
    int iCnt = 0;
    int iFactOdd=1;
    int iFactEven=1;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=1; iCnt<=iNo; iCnt++)
    {    
        if(iCnt%2!=0)
        {   
            iFactOdd=iFactOdd*iCnt;
        }
        else
        {
            iFactEven=iFactEven*iCnt;
        }
    }
    return iFactEven-iFactOdd;
}

int main()
{
    int iValue = 0;
    int iRet=0;
    printf("Enter number");
    scanf("%d", &iValue);

    iRet=Evenfactorial(iValue);

    printf("factorial differance is :%d",iRet);

    return 0;
}