///////////////////////////////////////////////////////////////////
//
//  Function Name : FhtoCs
//  Description   : Accept Temperature in Fahrenheit and convert it into Celcius
//  Input         : 10
//  Output        : -12.2222
//  Author        : Piyush Pagar
//  Date          : 1/11/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>

double FhtoCs(float fTemp)
{
    double fRes=0.0f;
    fRes=(fTemp-32)*(5.0f/9.0f);
    return fRes;
}

int main()
{
    float fValue= 0.0f;
    double dRet=0.0;
    printf("Enter Distance");
    scanf("%f", &fValue);

    dRet=FhtoCs(fValue);

    printf("Temperature in Celsius is:%4f",dRet);

    return 0;
}