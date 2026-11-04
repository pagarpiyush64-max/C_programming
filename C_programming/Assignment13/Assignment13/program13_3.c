#include<stdio.h>
#include<stdlib.h>

int CountOdd(int iNo)
{
    int icnt = 0;
    int iCount = 0;
    int iDigit = 0;

    if(iNo<0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit>3 && iDigit<7)
        {
            iCount++;
        }
        iNo = iNo / 10;

    }
    return iCount;
}


int main()
{

    int iValue = 0,iRet= 0;

    printf("enter a Number :\n");
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);

    printf("count of digit 3,7 is : %d",iRet);

    return EXIT_SUCCESS;
}