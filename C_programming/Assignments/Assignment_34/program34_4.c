///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkSpecial
//  Description :   check wheather the given character is symbol or not
//  Input :         Character
//  output :        Boolean
//  Author :        Shubham Shankarlal Kumawat
//  Date :          30/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                                              
#include<stdbool.h>                                            

bool ChkSpecial(char ch)
{
    int iCnt = 0;
    if((ch >= 'A')&&(ch <= 'Z'))
    {
        return false ;
    }
    else if((ch >= 'a')&&(ch <= 'z'))
    {
        return false ;
    }
    else
    {
        return true ;
    }
    

}

int main()
{
    char cValue ='\0';
    int iRet = false ;

    printf("Enter the character:");
    scanf("%c", &cValue);

    iRet = ChkSpecial(cValue);
    if(iRet == true)
    {
        printf("Is a special symbol");
    }
    else
    {
        printf("not a special symbol");
    }

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input1:!          Output:Is a special symbol            
//  Input1:m          Output:not a special symbol         
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////