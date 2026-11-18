///////////////////////////////////////////////////////////////////
//
//  Function Name : FirstChar
//  Description   : Accept a String from user and accept 1 character return First index of Characacter
//  Input         : Marvellous987 Multi21OS
//  Input         : e 
//  Output        : 4
//  Author        : Piyush Pagar
//  Date          : 15/11/2026
//
///////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>


int FirstChar(char *str,char ch)
{
    int ind=0;
    while(*str!='\0')
    {
        
        if(*str==ch)
        {
           return ind;
        }
        str++;
        ind++;
    } 
    return -1;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet=0;

    printf("Enter the string:");
    scanf("%[^\n]s",arr);

    printf("Enter the Character:");
    scanf(" %c",&cValue);

    iRet=FirstChar(arr,cValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}