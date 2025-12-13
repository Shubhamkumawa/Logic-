///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   Display the Capital into small and small into capital and other symbol as it is
//  Input :         Character
//  output :        void
//  Author :        Shubham Shankarlal Kumawat
//  Date :          30/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                                              

void Display(char ch)
{
    if((ch >= 'a')&&(ch <= 'z'))
    {
        ch = ch - 32 ;
        printf("%c \n", ch);
    }
    else if((ch >= 'A')&&(ch <= 'Z'))
    {
        ch = ch + 32 ;
        printf("%c \n", ch);
    }
    else
    {
        printf("%c \n", ch);
    }

}

int main()
{
    char cValue ='\0';

    printf("Enter the character:");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input1:a          Output: A                   
//  Input1 :B         Output: b
//  Input1:!          Output:!                        
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////