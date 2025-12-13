///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : StrCpyCap
//  Description :   copy the string in upper case
//  Input:          String 
//  output :        Void
//  Author :        Shubham Shankarlal Kumawat
//  Date :          01/12/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                                             

void StrCpyCap(char src[] , char dest[])
{
    while(*src != '\0')
    {
        if((*src >= 'a')&&(*src <= 'z'))
        {
            *dest = *src - 32 ;
        }
        else
        {
            *dest = *src ;
        }
        src++;
        dest++;
        
    }
    *dest = '\0';

}

int main()
{
    char cArr[50] ={'\0'};
    char cBrr[50] ;
    
    printf("Enter String:");
    scanf("%[^'\n']s", cArr);

    StrCpyCap(cArr , cBrr);
    
    printf("updated String: %s " , cBrr);
    
    
    
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input1:Marvellous Multi OS               Output:updated String: MARVELLOUS MULTI OS
//  Input1 :Hello World                       Output:updated String: HELLO WORLD
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////