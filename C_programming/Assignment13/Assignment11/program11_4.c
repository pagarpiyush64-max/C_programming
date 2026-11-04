#include<stdio.h> 
#include<stdlib.h> 

int RangeSumEven(int iStart, int iEnd) 
{ 
    int icnt = 0; 
    int iAns = 0; 

    
    for(icnt = iStart; icnt <= iEnd; icnt++) 
    { 
        
        if(icnt % 2 == 0) 
        { 
            iAns += icnt; 
        } 
    } 

    return iAns; 
} 

int main() 
{ 
    int iValue1 = 0; 
    int iValue2 = 0; 
    int iRet = 0; 

    printf("Enter starting point:\n"); 
    scanf("%d", &iValue1); 

    printf("Enter ending point:\n"); 
    scanf("%d", &iValue2); 

    iRet = RangeSumEven(iValue1, iValue2); 

    printf("Addition of even numbers is %d\n", iRet); 

    return EXIT_SUCCESS; 
}