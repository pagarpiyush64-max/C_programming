#include<stdio.h>
#include<stdlib.h>

void FactRev(int iNo)
{

    int icnt = 0;

    for(icnt=iNo;icnt>=1;icnt--)
    {
        if(iNo % icnt == 0)
        {
            printf("%d\t",icnt);
        }
    }
        


}

int main()
{

    int iValue = 0;

    printf("enter a number : \n");
    scanf("%d",&iValue);

    FactRev(iValue);





    return EXIT_SUCCESS;
}