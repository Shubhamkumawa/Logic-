///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayShedule
//  Description :   Display the exam shedule of the dividions
//  Input :         Character
//  output :        void
//  Author :        Shubham Shankarlal Kumawat
//  Date :          28/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                                             

void DisplayShedule(char ch)
{
    if((ch == 'a')||(ch == 'A'))
    {
        printf("your exam at 7 AM");
    }
    else if((ch == 'b')||(ch == 'B'))
    {
        printf("your exam at 8:30 AM");
    }
    else if((ch == 'c')||(ch == 'C'))
    {
        printf("your exam at 9:20 AM");
    }
    else if((ch == 'd')||(ch == 'D'))
    {
        printf("your exam at 10:30 AM");
    }
    else
    {
        printf("Enter the correct division");
    }

}

int main()
{
    char cValue ='\0';

    printf("Enter your Division:");
    scanf("%c", &cValue);

    DisplayShedule(cValue);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input1:a          Output: your exam at 7 AM                        
//  Input1 :b         Output: your exam at 8:30 AM
//  Input1:D          Output:your exam at 10:30 AM                        
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////