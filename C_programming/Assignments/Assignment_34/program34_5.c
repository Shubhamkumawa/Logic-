///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   Display its ASCII value in decimal, octal, hexadecimal
//  Input :         Character
//  output :        Void
//  Author :        Shubham Shankarlal Kumawat
//  Date :          30/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                                              

void Display(char ch)
{
    printf("Decimal :%d\n", ch);
    printf("Hexadecimal :%x\n", ch);
    printf("Octal:%o\n");

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
//  Input1:a          Output:Decimal :97
//                           Hexadecimal :61
//                           Octal:141           
//  Input1:M          Output:Decimal :77
//                           Hexadecimal :4d
//                           Octal:115                                   
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////