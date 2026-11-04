#include<stdio.h>
#include<stdlib.h>

int CountDiff(int iNo)
{
    int SumEven=0;
    int SumOdd=0;
    int iDigit = 0;

    if(iNo<0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            SumEven = SumEven+iDigit;
        }
        else
        {
            SumOdd = SumOdd +iDigit;
        }
        iNo = iNo / 10;

    }
    return ((SumEven) - (SumOdd));
}


int main()
{

    int iValue = 0,iRet= 0;

    printf("enter a Number :\n");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf(" difference is : %d",iRet);

    return EXIT_SUCCESS;
}