///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CountCapital
//  Description :   Return Count of capital letters
//  Input :         String
//  output :        Integer
//  Author :        Shubham Shankarlal Kumawat
//  Date :          30/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                                              


int CountCapital(char ch[])
{
    int iCount = 0;
    while(*ch!= '\0')
    {
        if((*ch >= 'A')&&(*ch <= 'Z'))
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

    iRet = CountCapital(cArr);
    printf("Capital letter in string :%d\n", iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input1:Marvellous Multi OS             Output: Capital letter in string :4            
//  Input1 :HELLO World                    Output: Capital letter in string :6              
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////