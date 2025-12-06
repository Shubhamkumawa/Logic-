//////////////////////////////////////////////////////////
//
//  Function Name : linearsearch
//  Description   : Accept an array and checks whether it contains 11 or not  
//  Input         : Integer 
//  Output        : Boolean
//  Author        : Shubham Shankarlal kumawat
//  Date          : 22/11/2025
//
/////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int * IPTR;

bool linearsearch(int arr[], int isize, int ivalue)
{
    int icnt = 0, icount = 0;
    
    for(icnt = 0; icnt<isize;icnt++)
    {
        if(arr[icnt] == ivalue)
        {
             icount++;
        }
    }
    
    if(icount>0)
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
    int ilength = 0 , iCnt = 0, ifreq = 11;
    bool bret = false;
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

    bret = linearsearch(iptr,ilength,ifreq);
    if(bret==true)
    {
        printf("%d is present in the data \n",ifreq);
    }
    else
    {
        printf("%d is not present in the data \n",ifreq);   
    }

    free(iptr);
    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input: 5 , {80,11,56,12,23}         Output: 11 is present in the data
//
//////////////////////////////////////////////////////////////////////////////////////////////////////