#include<stdio.h>
#include<stdlib.h>

int RangeSum(int iStart,int iEnd)
{
    int icnt = 0;
    int iAns = 0;

    for(icnt = iStart;icnt<=iEnd;icnt++)
    {
    iAns += icnt;
    }

    return iAns;
}

    
int main()
{

    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter starting point:\n");
    scanf("%d",&iValue1);

    printf("Enter ending point:\n");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1,iValue2);

    printf("sum is %d",iRet);
    


    return EXIT_SUCCESS;
}