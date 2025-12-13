///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : StrRevX
//  Description :   reverse the string 
//  Input:          String 
//  output :        Void
//  Author :        Shubham Shankarlal Kumawat
//  Date :          01/12/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                                            

void StrRevX(char ch[] )
{
    char*start = ch;
    char*end = ch;

    char temp = '\0';

    while(*end != '\0')
    {
        end++;
    }
    end-- ;
    
    while(start < end)
    {
        temp = *start ;
        *start = *end;
        *end = temp;

        start++;
        end-- ;
    }

}

int main()
{
    char cArr[50] ={'\0'};
    
    printf("Enter String:");
    scanf("%[^'\n']s", cArr);

    StrRevX(cArr);
    
    printf("Reverse String: %s " , cArr);
    
    
    
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input1::Marvellous                Output:Reverse String: suollevraM
//  Input1 :Hello World               Output:Last Reverse String: dlroW olleH
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////