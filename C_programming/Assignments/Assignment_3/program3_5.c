//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckVowel
//  Description :   Checks Character ie vowel or not
//  Input :         Integer
//  output :        Bool
//  Author :        Shubham Shankarlal Kumawat
//  Date :          11/11/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                                          
#include<stdbool.h>                                         

bool CheckVowel(char cValue)
{
    if ( cValue == 'a' || cValue == 'A'||cValue == 'e' || cValue == 'E'|| cValue == 'i' || cValue == 'I'||cValue == 'o' || cValue == 'O'||cValue == 'u' || cValue == 'U')  

    {
        return true;
    } 
    else
    {
        return false;
    }   
}

int main()
{
    char cValue = '\0';
    bool bRet   ='\0';

    printf("Enter Your Character\n");
    scanf("%c", &cValue);

    bRet = CheckVowel(cValue);

    if (bRet == true)
    {
        printf("It is a Vowel");

    }
    else
    {
       printf("It is not a Vowel");
    }
    
    return 0;

}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input1:'A'    Output:It is a Vowel
//  Input1:'B'    Output:It is not a Vowel
//
///////////////////////////////////////////////////////////////////////////////////////////////