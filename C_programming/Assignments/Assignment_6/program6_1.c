/////////////////////////////////////////////////////////
//
//  Function Name : Main
//  Description   : Accept Name and prints Name 
//  Input         : Character 
//  Output        : String
//  Author        : Shubham Shankarlal kumawat
//  Date          : 12/11/2025
//
/////////////////////////////////////////////////////////

#include<stdio.h>
int main()
{
    char Name[30];
    int iCnt =0;

    printf("please enter your full name :");            
    scanf("%[^\n]%*c", Name);                      

    printf(" %s\n ", Name);
    
    
    return 0 ;
}

////////////////////////////////////////////////////////////////////
//
//  Input: Shubham kumawat       Output: Shubham kumawat 
//
////////////////////////////////////////////////////////////////////