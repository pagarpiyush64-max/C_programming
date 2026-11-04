#include<stdio.h>
#include<stdlib.h>

int MultFact(int iNo)
{
    int iFact = 1;
    int icnt = 0;

    for(icnt=1;icnt<=iNo/2;icnt++)
    {
        if(iNo % icnt == 0)
        {
            iFact = iFact * icnt;
        }
    }

    return iFact;


}

int main()
{

    int iValue = 0;
    int iRet = 0;

    printf("enter a number : \n");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("Multiplication of factor is : %d",iRet);




    return EXIT_SUCCESS;
}