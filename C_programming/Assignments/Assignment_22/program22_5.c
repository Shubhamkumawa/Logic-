//////////////////////////////////////////////////////////
//
//  Function Name : frequencycalculate
//  Description   : Accept an array and N number and counts the frequency of N number in array
//  Input         : Integer 
//  Output        : Integer
//  Author        : Shubham Shankarlal kumawat
//  Date          : 22/11/2025
//
/////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;

int frequencycalculate(int arr[], int isize, int ivalue)
{
    int icnt = 0, icount = 0;
    
    for(icnt = 0; icnt<isize;icnt++)
    {
        if(arr[icnt] == ivalue)
        {
             icount++;
        }
    }
    return icount;
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

    printf("Enter the frequency of number : \n");
    scanf("%d",&ifreq);

    iret = frequencycalculate(iptr,ilength,ifreq);
    printf("Frequency of %d is : %d\n",ifreq,iret);

    free(iptr);
    return 0;
}

//////////////////////////////////////////////////////////////////////////////////
//
//  Input: 5 , {80,11,56,11,23} , 11        Output: Frequency of 11 is : 2
//
//////////////////////////////////////////////////////////////////////////////////