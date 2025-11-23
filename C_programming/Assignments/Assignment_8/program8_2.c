/////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : Accept single digit  and prints it into words 
//  Input         : Integer 
//  Output        : Void
//  Author        : Shubham Shankarlal kumawat
//  Date          : 12/11/2025
//
/////////////////////////////////////////////////////////

#include<stdio.h>


void Display(int iNo)
{
    if(iNo == 0)
    {
        printf("Zero");

    }
    
    else
    {

        switch (iNo)
     {
         case 1:
            {
                printf("One");
                break;
            }
            
        case 2 :
                {
                    printf("Two");
                    break;
                }
        case 3 :
                {
                    printf("Three");
                    break;
                }
        case 4 :
                {
                    printf("four");
                    break;
                }
        case 5 :
                {
                    printf("Five");
                    break;
                }
        case 6 :
                {
                    printf("Six");
                    break;
                }
        case 7 :
                {
                    printf("Seven");
                    break;
                }
        case 8 :
                {
                    printf("Eight");
                    break;
                }
        case 9 :
                {
                    printf("Nine");
                    break;
                }


        default:
                {
                    printf("Invalid input ");
                    break;
                }
            
        
        }
    
    }
   
}

int main()
{
    int iValue = 0 ;
    
    printf("Enter Single digit number :");
    scanf("%d ",&iValue);

    Display(iValue);

    return 0 ;
}

////////////////////////////////////////////////////////////////////
//
//  Input: 5       Output: Five  
//
////////////////////////////////////////////////////////////////////