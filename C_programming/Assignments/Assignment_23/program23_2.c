//////////////////////////////////////////////////////////
//
//  Function Name : linearsearch
//  Description   : Accept an array and N number and prints the index of first occurance of N number
//  Input         : Integer 
//  Output        : Integer
//  Author        : Shubham Shankarlal kumawat
//  Date          : 22/11/2025
//
/////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


typedef int * IPTR;

int linearsearch(int arr[], int isize, int ivalue)
{
    int icnt = 0, icount = 0;
    
    for(icnt = 0; icnt<isize;icnt++)
    {
        if(arr[icnt] == ivalue)
        {
             return icnt ;
             break;
        }
    }
    
    
}

int main()
{
    int ilength = 0 , iCnt = 0, ifreq = 0, iret = 0;
    IPTR iptr = NULL;

    printf("Enter the number of elements : \n");
    scanf("%d",&ilength);

    iptr  =(IPTR)malloc(ilength*sizeof(int));

    if(NULL == iptr)
    {
        printf("Memory not allocated ");
        return -1;
    }

    printf("Enter the values : \n");

    for(iCnt = 0; iCnt<ilength ; iCnt++)
    {
        scanf("%d",&iptr[iCnt]);
    }

    printf("Enter the number to search : \n");
    scanf("%d",&ifreq);

    iret = linearsearch(iptr,ilength,ifreq);
    printf("Index of %d occured at : %d",ifreq,iret);
    
    free(iptr);
    return 0;
}

//////////////////////////////////////////////////////////////////////////////////
//
//  Input: 5 , {80,11,56,15,23} , 11        Output: Index of 11 occured at : 1
//
//////////////////////////////////////////////////////////////////////////////////