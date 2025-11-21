
//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayConvert
//  Description   : Convert the character to itd case
//  Input         : Integer
//  output        : Void
//  Author        : Shubham Shankarlal Kumawat
//  Date          : 11/11/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                                         

void DisplayConvert(char cValue)
{
    if (cValue >= 'A' && cValue <= 'Z')
    {
       cValue = cValue + 32 ;
       printf("%c",cValue);
    }
    
    else if(cValue >= 'a' && cValue <= 'z')
    {
        cValue = cValue - 32;
        printf("%c",cValue);
    }
}

int main()
{
    char cValue = '\0'  ;
    
    printf("Enter your Character\n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);


return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input1:'A'    Output:'a'
//  Input1:'a'    Output:'A'
//
///////////////////////////////////////////////////////////////////////////////////////////////

