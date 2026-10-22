#include<stdio.h>
#include<stdlib.h>

void PrintEven(int iNo)
{
    int iCnt=0;
    if(iNo<=0)
    {
        printf("Invalid Number");
        return;
    }
    for(iCnt=1;iCnt<=iNo*2;iCnt++)
    {
        if(iCnt%2==0)
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iValue=0;
    printf("Enter the nnumber:");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return EXIT_SUCCESS;
}