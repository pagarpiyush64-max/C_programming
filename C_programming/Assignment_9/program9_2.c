///////////////////////////////////////////////////////////////////
//
//  Function Name : table
//  Description   : Display the Table of Number 
//  Input         : 1200
//  Output        : 84000
//  Author        : Piyush Pagar
//  Date          : 31/10/2026
//
///////////////////////////////////////////////////////////////////


#include<stdio.h>

int DollarToINR(int iNo)
{
    int iCnt = 0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    return iNo*70;
}

int main()
{
    int iValue = 0;
    int iRet=0;
    printf("Enter number");
    scanf("%d", &iValue);

    iRet=DollarToINR(iValue);

    printf("Value in INR is:%d",iRet);

    return 0;
}