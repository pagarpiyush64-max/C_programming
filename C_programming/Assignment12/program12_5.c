#include<stdio.h>
#include<stdlib.h>


int Count(int iNo)
{

    int icnt= 0;
    int iCount = 0;
    int iDigit = 0;
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;  //extract last digit
        if(iDigit < 6)  //check it which is less than 6
        {
            iCount++;
        }
        iNo = iNo/10;   //drop the last digit
    }
    return iCount;


}

int main()
{

    int iValue = 0;
    int iret = 0;

    printf("enter number :");
    scanf("%d",&iValue);

    iret = Count(iValue);

    printf("%d",iret);

    return EXIT_SUCCESS;
}