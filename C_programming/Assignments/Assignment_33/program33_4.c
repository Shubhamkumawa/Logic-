///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkSmall
//  Description :   check the entered character is Small letter or not(a-z) 
//  Input :         Character
//  output :        Boolean
//  Author :        Shubham Shankarlal Kumawat
//  Date :          28/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                                              
#include<stdbool.h>                                            


bool ChkSmall(char ch)
{
    if((ch >= 'a')&&(ch <= 'z'))
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

    bRet = ChkSmall(cValue);

    if(bRet == true)
    {
        printf("It is Small letter");
    }
    else
    {
        printf("It is not a Small letter");
    }

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input1:a          Output:It is Small letter                          
//
//  Input1:!          Output:It is not Small letter                          
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////