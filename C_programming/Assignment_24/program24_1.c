///////////////////////////////////////////////////////////////////
//
//  Function Name : ChkChar
//  Description   : Accept a String from user and accept 1 character display check weather character is available or not
//  Input         : Marvellous987 Multi21OS
//  Input         : e 
//  Output        : True
//  Author        : Piyush Pagar
//  Date          : 15/11/2026
//
///////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str,char ch)
{
    while(*str!='\0')
    {
        if(*str==ch)
        {
           return TRUE;
        }
        str++;
    } 
    return FALSE;  
}

int main()
{
    char arr[20];
    char cValue;
    BOOL bRet=FALSE;

    printf("Enter the string:");
    scanf("%[^\n]s",arr);

    printf("Enter the Character:");
    scanf(" %c",&cValue);

    bRet=ChkChar(arr,cValue);

    if(bRet==TRUE)
    {
        printf("Character found");
    }
    else
    {
        printf("Character not found");
    }
    

    return EXIT_SUCCESS;
}