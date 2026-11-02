///////////////////////////////////////////////////////////////////
//
//  Function Name : RectArea
//  Description   : find the Area of Rectangle
//  Input         : 5.3     9.78 
//  Output        : 51.834
//  Author        : Piyush Pagar
//  Date          : 31/10/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>

double RectArea(float fWidth,float fHeigth)
{
    float fArea=0;
    fArea=(fWidth*fHeigth);
    return fArea;
}

int main()
{
    float fValue1 = 0;
    float fValue2 = 0;
    float fRet=0;
    printf("Enter Width");
    scanf("%f", &fValue1);

    printf("Enter Height");
    scanf("%f", &fValue2);

    fRet=RectArea(fValue1,fValue2);

    printf("Area of Rectangle is:%3f",fRet);

    return 0;
}