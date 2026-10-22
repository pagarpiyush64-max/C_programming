#include<stdio.h>
#include<stdlib.h>

void CheckVotingEligibility(int iAge)
{
    if(iAge<=0)
    {
        printf("Invalid Age");
    }
    else if(iAge>=21)
    {
        printf("Eligible for Voting");
    }
    else
    {
       printf("Not Eligible for Voting"); 
    }
}

int main()
{
    int iAge=0;
  
    printf("Enter the Age");
    scanf("%d",&iAge);

    CheckVotingEligibility(iAge);


    return EXIT_SUCCESS;
}