///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : StrCpyRev
//  Description :   reverse the string 
//  Input:          String 
//  output :        Void
//  Author :        Shubham Shankarlal Kumawat
//  Date :          01/12/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                                              

void StrCpyRev(char src[] , char dest[])
{
    while(*src != '\0')
    {
        src++;
    }
    src--;
    while(src >= dest)
    {
       *dest = *src ;
        dest++;
        src-- ;
    }
    *dest = '\0';

}

int main()
{
    char cArr[50] ={'\0'};
    char cBrr[50] ;
    
    printf("Enter String:");
    scanf("%[^'\n']s", cArr);

    StrCpyRev(cArr , cBrr);
    
    printf("Reverse String: %s " , cBrr);
    
    
    
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input1:Marvellous                Output:Reverse String: suollevraM
//  Input1 :Hello World               Output:Last Reverse String: dlroW olleH
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////