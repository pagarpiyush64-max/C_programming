#include<stdio.h>
#include<stdlib.h>

int MultDigits(int iNo)
{
    int icnt = 0;
    int iCount = 0;
    int iDigit = 0;
    int iAns = 1;

    if(iNo<0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iAns = iAns * iDigit;
        iNo = iNo / 10;

    }
    return iAns;
}


int main()
{

    int iValue = 0,iRet= 0;

    printf("enter a Number :\n");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("Multiplication of digit is : %d",iRet);

    return EXIT_SUCCESS;
}