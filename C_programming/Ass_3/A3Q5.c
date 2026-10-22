#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef bool b;
#define True 1
#define False 0

b ChkVowel(char cValue)
{
    if(cValue=='a' || cValue=='e' || cValue=='i' || cValue=='o' || cValue=='u' || cValue=='A' || cValue=='E' || cValue=='I' || cValue=='O' || cValue=='U')
    {
        return True;
    }
    else
    {
        return False;
    }
}

int main()
{
    char cValue='\0';
    bool bRet=False;

    printf("Enter the nnumber:");
    scanf("%c",&cValue);

    bRet=ChkVowel(cValue);

    if(bRet==1)
    {
        printf("It is vowel");
    }
    else
    {
        printf("It is not vowel");
    }

    return EXIT_SUCCESS;
}
