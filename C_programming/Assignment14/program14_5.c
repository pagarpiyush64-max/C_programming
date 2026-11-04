#include<stdio.h>
#include<stdlib.h>

int FactDiff(int iNo)
{

    int icnt = 0;
    int iFact = 0;
    int inonFact = 0;

    for(icnt=1;icnt<=iNo;icnt++)
    {
        if(iNo % icnt == 0) //factorial
        {
            iFact = iFact +icnt;
        }
        else   //non-factorial
        {
            inonFact = inonFact+icnt;
        }
    }
        

    return ((iFact) - (inonFact));

}

int main()
{

    int iValue = 0;
    int iRet = 0;

    printf("enter a number : \n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("Difference is : %d",iRet);




    return EXIT_SUCCESS;
}