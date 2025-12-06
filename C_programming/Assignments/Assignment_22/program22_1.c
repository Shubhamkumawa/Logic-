//////////////////////////////////////////////////////////
//
//  Function Name : CountEven
//  Description   : Accept an array and prints even data from array
//  Input         : Integer 
//  Output        : Void
//  Author        : Shubham Shankarlal kumawat
//  Date          : 22/11/2025
//
/////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


typedef int * IPTR;


void CountEven(int arr[] , int isize)
{
    int icnt = 0, icount = 0;

    for(icnt = 0; icnt<isize; icnt++)
    {
        if(arr[icnt]%2 == 0)
        {
            icount++;
           
        }
    }
    printf("Count of even  data from array is : %d",icount);
    
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

    CountEven(iptr,ilength);
    
    free(iptr);
    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////
//
//  Input: 5 , {80,81,56,79,23}         Output: Count of even  data from array is : 2
//
//////////////////////////////////////////////////////////////////////////////////////////