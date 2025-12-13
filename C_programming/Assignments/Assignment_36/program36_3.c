///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : strtoggleX
//  Description :   convert lower case into upper case and upper case into lower case
//  Input :         String
//  output :        void
//  Author :        Shubham Shankarlal Kumawat
//  Date :          30/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                                              


void strtoggleX(char ch[])
{
    
    while(*ch!= '\0')
    {
        if((*ch >= 'a')&&(*ch <= 'z'))
        {
            *ch = *ch - 32 ;
        }
        else if((*ch >= 'A')&&(*ch <= 'Z'))
        {
            *ch = *ch + 32 ;
        }
        ch++;
    }

}

int main()
{
    char cArr[50] ={'\0'};

    printf("Enter String:");
    scanf("%[^'\n']s", cArr);

    strtoggleX(cArr);

    printf("Updated string : %s", cArr);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input1:Marvellous Multi OS         Output: Updated string : mARVELLOUS mULTI os 
//  Input1 :HELLO world                Output: Updated string : hello WORLD
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////