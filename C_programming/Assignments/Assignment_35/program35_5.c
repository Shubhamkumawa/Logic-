///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Reverse
//  Description :   Reverse the given string
//  Input :         String
//  output :        void
//  Author :        Shubham Shankarlal Kumawat
//  Date :          30/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                                              

void Reverse(char ch[])
{
    char*temp = ch ;

    while(*ch!= '\0')
    {
        ch++;
    }
    while(ch >= temp)
    {
        printf("%c" , *ch);
        ch--;
    }
    

}

int main()
{
    char cArr[50] ={'\0'};
    
    printf("Enter String:");
    scanf("%[^'\n']s", cArr);

    Reverse(cArr);
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input1:Marvellous            Output: suollevraM    
//  Input1: world                Output: dlrow
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////