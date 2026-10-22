#include<stdio.h>
#include<stdlib.h>

void FindGreater(int iFirst,int iSecond,int iThird)
{
    if( iFirst<iSecond && iThird<iSecond )
    {
        printf("%d is greater",iSecond);
    }
    else if( iFirst<iThird && iSecond<iThird )
    {
       printf("%d is greater",iThird);
    }
    else
    {
        printf("%d is greater",iFirst);
    }
}

int main()
{
    int iValue1=0,iValue2=0,iValue3=0;
  
    printf("Enter Three Numbers");
    scanf("%d%d%d",&iValue1,&iValue2,&iValue3);

    FindGreater(iValue1,iValue2,iValue3);


    return EXIT_SUCCESS;
}