//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DigitsSum
//  Description :   Accept an array and prints the summation all digits of number from array
//  Input :         Integer
//  output :        Void
//  Author :        Shubham Shankarlal Kumawat
//  Date :          22/11/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[],int iSize )
{
    int iCnt = 0 ;
    int iDigit = 0;
    
    printf("____________________________\n");
    for(iCnt =0 ; iCnt < iSize ; iCnt++)
    {   
        int iSum  = 0 ;
        
        while(Arr[iCnt]!=0)
        {
            iDigit = Arr[iCnt] % 10;
            Arr[iCnt] =  Arr[iCnt] / 10;
            iSum = iSum + iDigit ; 
        }
        printf("%d\n",iSum);
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
        scanf("%d",&Ptr[iCnt]);
    }

    DigitsSum(Ptr , iLength );
    

    free(Ptr);

    return 0 ;
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input: 5 , {11,12,13,14,15}     Output: 2 3 4 5 6 
//
///////////////////////////////////////////////////////////////////////////////////////////////