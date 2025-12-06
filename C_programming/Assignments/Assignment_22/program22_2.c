//////////////////////////////////////////////////////////
//
//  Function Name : counteven
//  Description   : Accept an array and return the differen between count of odd and even number
//  Input         : Integer 
//  Output        : Void
//  Author        : Shubham Shankarlal kumawat
//  Date          : 22/11/2025
//
/////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


typedef int * IPTR;


void counteven(int arr[] , int isize)
{
    int icnt = 0, iecount = 0, iocount = 0, idcount = 0;

    for(icnt = 0; icnt<isize; icnt++)
    {
        if(arr[icnt]%2 == 0)
        {
            iecount++;
           
        }
        else if(arr[icnt]%2 == 1)
        {
            iocount++;
        }
    }
    idcount = iocount - iecount;
    printf("Difference of odd and even data from array is : %d",idcount);
    
}
int main()
{
    int ilength = 0 , iCnt = 0, iret = 0;
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

    counteven(iptr,ilength);

    free(iptr);
    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input: 5 , {80,11,56,12,23}         Output: Difference of odd and even data from array is : 1 
//
//////////////////////////////////////////////////////////////////////////////////////////////////////