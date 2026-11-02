///////////////////////////////////////////////////////////////////
//
//  Function Name : Squaremeter
//  Description   : Accept Square in feet  and convert it into Square Meter
//  Input         : 5 
//  Output        : 0.464515
//  Author        : Piyush Pagar
//  Date          : 1/11/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>

double Squaremeter(int iNo)
{
    double dRes=0.0;
    dRes=iNo*0.0929;
    return dRes;
}

int main()
{
    int iValue= 0;
    double dRet=0.0;
    printf("Enter are in Square Feet:");
    scanf("%d", &iValue);

    dRet=Squaremeter(iValue);

    printf("Distance in Meter is:%f",dRet);

    return 0;
}