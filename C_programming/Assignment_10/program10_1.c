///////////////////////////////////////////////////////////////////
//
//  Function Name : CircleArea
//  Description   : find the Area of Circle 
//  Input         : 5.3
//  Output        : 88.2026
//  Author        : Piyush Pagar
//  Date          : 31/10/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>

double CircleArea(float fradius)
{
    float fArea=0;
    fArea=(3.14*fradius*fradius);
    return fArea;
}

int main()
{
    float fValue = 0;
    float fRet=0;
    printf("Enter number");
    scanf("%f", &fValue);

    fRet=CircleArea(fValue);

    printf("Area of Circle is:%4f",fRet);

    return 0;
}