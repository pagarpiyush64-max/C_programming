#include<stdio.h>
#include<stdlib.h>

void RangeDisplay(int iStart,int iEnd)
{
    int icnt = 0;
    for(icnt=iStart;icnt<=iEnd;icnt++)
    {
        if(icnt % 2 == 0)
        {
        printf("%d\t",icnt);
        }
    }    
}

    
int main()
{

    int iValue1 = 0;
    int iValue2 = 0;
    

    printf("Enter starting point:\n");
    scanf("%d",&iValue1);

    printf("Enter ending point:\n");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);

    


    return EXIT_SUCCESS;
}