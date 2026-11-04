#include<stdio.h>
#include<stdlib.h>


int CountTwo(int iNo)
{

    int icnt= 0;
    int iCount = 0;
    
    while(iNo != 0)
    {
        if(iNo % 10 == 2)
        {
            iCount++;
        }
        iNo = iNo/10;
    }
    return iCount;


}

int main()
{

    int iValue = 0;
    int iret = 0;

    printf("enter number :");
    scanf("%d",&iValue);

    iret = CountTwo(iValue);

    printf("%d",iret);

    return EXIT_SUCCESS;
}