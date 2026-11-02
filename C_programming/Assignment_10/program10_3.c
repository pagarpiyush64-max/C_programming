///////////////////////////////////////////////////////////////////
//
//  Function Name : KMtoMeter
//  Description   : Accept KM and convert it into Meter
//  Input         : 5 
//  Output        : 5000
//  Author        : Piyush Pagar
//  Date          : 1/11/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iRes=0;
    iRes=iNo*1000;
    return iRes;
}

int main()
{
    int iValue= 0;
    int iRet=0;
    printf("Enter Distance");
    scanf("%d", &iValue);

    iRet=KMtoMeter(iValue);

    printf("Distance in Meter is:%d",iRet);

    return 0;
}