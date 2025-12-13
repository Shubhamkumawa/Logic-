///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayDigit
//  Description :   Display digit from the string
//  Input :         String
//  output :        void
//  Author :        Shubham Shankarlal Kumawat
//  Date :          30/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                                          


void DislpayDigit(char ch[])
{
    
    while(*ch!= '\0')
    {
        if((*ch >= '0')&&(*ch <= '9'))
        {
            printf("%c", *ch);
        }
        ch++;
    }

}

int main()
{
    char cArr[50] ={'\0'};

    printf("Enter String:");
    scanf("%[^'\n']s", cArr);

    DislpayDigit(cArr);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input1:marve89llous191                   Output:89191      
//  Input1 : Demo                            Output:
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////