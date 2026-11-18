///////////////////////////////////////////////////////////////////
//
//  Function Name : Chkvowel
//  Description   : Accept a String from user and check weather vowel are available or not  
//  Input         : marvellous
//  Output        : Contains Vowels  
//  Input         : ctyw
//  Output        : Not Contains Vowel
//  Author        : Piyush Pagar
//  Date          : 15/11/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *str)
{
    while(*str!='\0')
    {
        if(*str=='A' || *str=='E' || *str=='I' || *str=='O' || *str=='U' || *str=='a' || *str=='e' || *str=='i' || *str=='o' || *str=='u' )
        {
            return 1;
        }
        str++;
    }
    return 0;
}

int main()
{
    char arr[20];
    BOOL bret=FALSE;

    printf("Enter the String");
    scanf("%[^\n]s",arr);

    bret=ChkVowel(arr);

    if(bret==TRUE)
    {
        printf("Comtain Vowels");
    }
    else
    {
       printf("Not Contain Vowels"); 
    }

    return EXIT_SUCCESS;
}
