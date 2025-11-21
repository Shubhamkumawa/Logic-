/////////////////////////////////////////////////////////
//
//  Function Name : Displayfactor
//  Description   : Accept n number and displays the factor of that number
//  Input         : Integer 
//  Output        : Void
//  Author        : Shubham Shankarlal kumawat
//  Date          : 11/11/2025
//
/////////////////////////////////////////////////////////


#include<stdio.h>

void Displayfactor(int ino)
{
    int i =0;
    if(ino<=0)
    {
        ino=-ino;
    }
    for(i=1;i<=ino/2;i++)
    {
        if(ino%i==0)
        {
            
            printf("%d\t",i);
            
        }
    }
}
int main()
{
    int ivalue= 0;
    printf("Enter a number : \n");
    scanf("%d",&ivalue);
    Displayfactor(ivalue);
    return 0;
}

/////////////////////////////////////////////////////////
//
//  Input: 6        Output: 1 2 3 
//
/////////////////////////////////////////////////////////