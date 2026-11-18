///////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayASCII
//  Description   : Displat all ASCII values from 0 to 255 
//  Author        : Piyush Pagar
//  Date          : 15/11/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void DisplayASCII()
{
    int iCnt=0;
    for(iCnt=0;iCnt<=255;iCnt++)
    {
        printf("%d %c\n",iCnt,iCnt);
    }
}

int main()
{
    DisplayASCII();

    return EXIT_SUCCESS;
}
