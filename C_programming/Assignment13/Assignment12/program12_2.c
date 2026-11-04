#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL chkZero(int iNo)
{

    int icnt= 0;
    if(iNo<0)
    {
        iNo = -iNo;

    }
    while(iNo > 0)
    {
        if(iNo % 10 == 0)
        {
            return TRUE;
        }
        iNo = iNo/10;
    }
    return FALSE;


}

int main()
{

    int iValue = 0;
    BOOL bret = FALSE;

    printf("enter number :");
    scanf("%d",&iValue);

    bret = chkZero(iValue);

    if(bret == TRUE)
    {
        printf("it contains zero");
    }
    else
    {
        printf("there is no Zero");
    }


    return EXIT_SUCCESS;
}