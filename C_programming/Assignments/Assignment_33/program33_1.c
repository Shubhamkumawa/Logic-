///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkAlpha
//  Description :   check the entered character is of alphabate (a-z  A-Z)
//  Input :         Character
//  output :        Boolean
//  Author :        Shubham Shankarlal Kumawat
//  Date :          28/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                                              
#include<stdbool.h>                                            

bool ChkAlpha(char ch)
{
    if((ch == 'A')||(ch == 'Z')||(ch == 'a')||(ch == 'z'))
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

    bRet = ChkAlpha(cValue);

    if(bRet == true)
    {
        printf("It is Character");
    }
    else
    {
        printf("It is not a character");
    }

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input1:A          Output:It is Character                             
//
//  Input1:!          Output:It is not Character                           
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////