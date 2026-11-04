#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkEqual(int iNo1,int iNo2)
{
    if(iNo1 == iNo2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    BOOL bret = FALSE;

    printf("Enter First Number :\n");
    scanf("%d",&iValue1);

    printf("Enter second Number :\n");
    scanf("%d",&iValue2);

    bret = ChkEqual(iValue1,iValue2);

    if(bret == 1)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }
}