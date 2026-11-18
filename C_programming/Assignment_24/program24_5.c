///////////////////////////////////////////////////////////////////
//
//  Function Name : StrRev
//  Description   : Accept a String from user and reverse the string
//  Input         : Piyush 
//  Output        : hsuyiP
//  Author        : Piyush Pagar
//  Date          : 15/11/2026
//
///////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>


void StrRev(char *str)
{
    int i=0,j=0;
    char temp;
    while(str[i]!='\0')
    {   
        i++;
    }
    i--; 
    while(j<i)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i--;
        j++;
    }
}

int main()
{
    char arr[20];
    char cValue;
    int iRet=0;

    printf("Enter the string:");
    scanf("%[^\n]s",arr);

    StrRev(arr);

    printf("%s",arr);

    return EXIT_SUCCESS;
}