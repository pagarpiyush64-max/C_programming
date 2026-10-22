#include<stdio.h>
#include<stdlib.h>

void FindGreater(int iNo1,int iNo2)
{
    if(iNo1==iNo2)
    {
        printf("Both are equal");
    }
    else if(iNo1>iNo2)
    {
        printf("%d is greater",iNo1);
    }
    else
    {
       printf("%d is greater",iNo2); 
    }
}

int main()
{
    int iValue1=0;
    int iValue2=0;
  
    printf("Enter the 1 number to check Even or Odd:");
    scanf("%d",&iValue1);

    printf("Enter the 2 number to check Even or Odd:");
    scanf("%d",&iValue2);

    FindGreater(iValue1,iValue2);


    return EXIT_SUCCESS;
}