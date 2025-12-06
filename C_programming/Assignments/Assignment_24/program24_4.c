//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Digits
//  Description :   Accept an array and prints the 3 digit number from array
//  Input :         Integer
//  output :        Void
//  Author :        Shubham Shankarlal Kumawat
//  Date :          22/11/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[],int iSize )
{
    int iCnt = 0 ;
    int iDigit = 0;
    int iTemp  = 0 ;

    printf("____________________________\n");
    for(iCnt =0 ; iCnt < iSize ; iCnt++)
    {
        iTemp = Arr[iCnt] ;
        int iCount = 0 ;
        
        while(iTemp!=0)
        {
            iDigit = iTemp % 10;
            iTemp =  iTemp / 10;
            iCount++; 
        }
        if(iCount == 3)
        {
            printf("%d\n",Arr[iCnt]);
        }
    }
  
}


int main()
{
    int iCnt = 0;
    int iLength = 0;
    int*Ptr = NULL;

    printf("Enter the number of elements in Array : \n");
    scanf("%d" , &iLength);

    Ptr=(int*)malloc(iLength*sizeof(int));

    if(Ptr == NULL)
    {
        printf(" Memory allocation failed !!!!!");
    }

    printf("Enter the elements :\n");

    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
        scanf("%d", &Ptr[iCnt]);
    }

    Digits(Ptr , iLength );
    

    free(Ptr);

    return 0 ;
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input: 5 , {11,121,132,154,16}      Output: 121 132 154 
//
///////////////////////////////////////////////////////////////////////////////////////////////