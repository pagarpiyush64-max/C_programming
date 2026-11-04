#include<stdio.h>
#include<stdlib.h>

int CountEven(int iNo)
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
        if(iDigit % 2 == 0)
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

    iRet = CountEven(iValue);

    printf("count of even no is : %d",iRet);

    return EXIT_SUCCESS;
}