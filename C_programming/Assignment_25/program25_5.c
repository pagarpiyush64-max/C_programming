///////////////////////////////////////////////////////////////////
//
//  Function Name : DisplaySchedule
//  Description   : Accept a A,B,c,D Division of school from user and Display the Exam Time 
//  Input         : A/a
//  Output        : Your Exam is at 7Am
//  Input         : G
//  Output        : Invalid Division 
//  Author        : Piyush Pagar
//  Date          : 15/11/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void DisplaySchedule(char chDiv)
{
    if(chDiv=='A' || chDiv=='a')
    {
        printf("Your exam is at 7AM");
    }
    else if(chDiv=='B' || chDiv=='b')
    {
        printf("Your exam is at 8.30AM");
    }
    else if(chDiv=='C' || chDiv=='c')
    {
        printf("Your exam is at 9.20AM");
    }
    else if(chDiv=='D' || chDiv=='d')
    {
        printf("Your exam is at 10.30AM");
    }
    else
    {
        printf("Invalid Division");
    }
}

int main()
{
    char cValue='\0';

    printf("Enter the character");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return EXIT_SUCCESS;
}
