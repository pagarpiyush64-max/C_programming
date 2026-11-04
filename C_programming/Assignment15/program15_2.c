#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkGreater(int iNo)
{
    if(iNo>100)
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
    int iValue = 0;
    BOOL bret = FALSE;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    bret = ChkGreater(iValue);

    if(bret == 1)
    {
        printf("Greater");
    }
    else
    {
        printf("smaller");
    }
}