#include<stdio.h>
#include<stdlib.h>

int Multiply(int iNo1,int iNo2,int iNo3)
{
    int iAns = 0;

    if(iNo1 == 0 || iNo2 == 0 || iNo3 == 0)
    {
        iAns = iNo1 * iNo2 *iNo3;
    }

    return iAns;


}
int main()
{

    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;
    int iRet = 0;

    printf("enter First Number : \n");
    scanf("%d",&iValue1);

    printf("enter Second Number : \n");
    scanf("%d",&iValue2);

    printf("enter third Number : \n");
    scanf("%d",&iValue3);

    iRet = Multiply(iValue1,iValue2,iValue3);

    printf("Multiplication is : %d",iRet);

    return EXIT_SUCCESS;
}