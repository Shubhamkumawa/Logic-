///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CountWhiteSpace
//  Description :   count white space in the string
//  Input :         String
//  output :        Integer
//  Author :        Shubham Shankarlal Kumawat
//  Date :          30/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                                             

int CountWhiteSpace(char ch[])
{
    int iCount = 0 ;
    
    while(*ch!= '\0')
    {
        if(*ch == ' ')
        {
            iCount++;
        }
        ch++;
    }
    return iCount ;

}

int main()
{
    char cArr[50] ={'\0'};
    int iRet = 0 ;

    printf("Enter String:");
    scanf("%[^'\n']s", cArr);

    iRet = CountWhiteSpace(cArr);
    printf("white space are :%d",iRet);
    
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input1:he  ll  oo                  Output:4  
//  Input1 :D e m o                    Output:3
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////