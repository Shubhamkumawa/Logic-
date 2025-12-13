
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkCapital
//  Description :   check the entered character is capital letter or not(A-Z) 
//  Input :         Character
//  output :        Boolean
//  Author :        Shubham Shankarlal Kumawat
//  Date :          28/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                                             
#include<stdbool.h>                                           

bool ChkCapital(char ch)
{
    if((ch >= 'A')&&(ch <= 'Z'))
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

    bRet = ChkCapital(cValue);

    if(bRet == true)
    {
        printf("It is Capital letter");
    }
    else
    {
        printf("It is not a Capital letter");
    }

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input1:A          Output:It is Capital letter                          
//
//  Input1:!          Output:It is not Capital letter                          
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////