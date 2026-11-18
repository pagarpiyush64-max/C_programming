///////////////////////////////////////////////////////////////////
//
//  Function Name : LastChar
//  Description   : Accept a String from user and accept 1 character return Last occarance index of Characacter
//  Input         : Marvellous987 Multi21OS
//  Input         : M
//  Output        : 14      
//  Author        : Piyush Pagar
//  Date          : 15/11/2026
//
///////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>


int LastChar(char *str,char ch)
{
    int ind=0;
    int index=-1;
    while(*str!='\0')
    {
        
        if(*str==ch)
        {
           index=ind;
        }
        str++;
        ind++;
    } 
    return index;
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

    iRet=LastChar(arr,cValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}