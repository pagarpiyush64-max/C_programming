#include<stdio.h>
#include<stdlib.h>

void RangeDisplayRev(int iStart,int iEnd)
{
    int icnt = 0;
    for(icnt=iEnd;icnt>=iStart;icnt--)
    {
        printf("%d\t",icnt);
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

    RangeDisplayRev(iValue1,iValue2);

    


    return EXIT_SUCCESS;
}