//////////////////////////////////////////////////////////
//
//  Function Name : FirstOcc
//  Description   : Accept an array and N number and prints the first occurance of the N number
//  Input         : Integer 
//  Output        : Integer
//  Author        : Shubham Shankarlal kumawat
//  Date          : 22/11/2025
//
/////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[],int iSize , int iNo)
{
    int iCnt = 0 ;
    int iIndex = 0;
    for(iCnt =0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iIndex = iCnt;
            
        }
    }
    return iIndex;
}


int main()
{
    int iCnt = 0;
    int iLength = 0;
    int iValue = 0;
    int iRet = 0 ;
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

    printf("Enter the to Search : \n");
    scanf("%d" , &iValue);

    iRet = FirstOcc(Ptr , iLength , iValue);
    printf("%d is Occured first at index  %d ", iValue , iRet);

    free(Ptr);

    return 0 ;
}

//////////////////////////////////////////////////////////////////////////////////////
//
//  Input: 5 , {80,21,56,11,21} , 21        Output: 21 is Occured first at index 1
//
//////////////////////////////////////////////////////////////////////////////////////