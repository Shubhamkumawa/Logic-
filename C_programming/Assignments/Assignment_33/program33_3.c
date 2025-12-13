///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkDigit
//  Description :   check the entered character is Digit or not(0-9) 
//  Input :         Character
//  output :        Boolean
//  Author :        Shubham Shankarlal Kumawat
//  Date :          28/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                                              
#include<stdbool.h>                                            


bool ChkDigit(char ch)
{
    if((ch >= '0')&&(ch <= '9'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cValue ='\0';
    bool bRet =false;

    printf("Enter the character:");
    scanf("%c", &cValue);

    bRet = ChkDigit(cValue);

    if(bRet == true)
    {
        printf("It is a Digit");
    }
    else
    {
        printf("It is not a Digit");
    }

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input1:8        Output:It is a Digit                           
//
//  Input1:!          Output:It is not a Digit                           
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////