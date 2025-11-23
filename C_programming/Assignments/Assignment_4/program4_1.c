/////////////////////////////////////////////////////////
//
//  Function Name : Displayfactor
//  Description   : Accept n number and prints multiplication of factors of that number 
//  Input         : Integer 
//  Output        : Integer
//  Author        : Shubham Shankarlal kumawat
//  Date          : 12/11/2025
//
/////////////////////////////////////////////////////////

#include<stdio.h>

int Displayfactor(int ino)
{
    int i =0;
    int imult = 1;
    if(ino<=0)
    {
        ino=-ino;
    }
    for(i=1;i<=ino/2;i++)
    {
        if((ino%i)==0)
        {
            imult = imult*i;
        }
        
    }
    return imult;
}
int main()
{
    int ivalue= 0 , iret = 0;
    printf("Enter a number : \n");
    scanf("%d",&ivalue);
    iret = Displayfactor(ivalue);
    printf("Multiplication of factors are : %d\n",iret);
    return 0;
}

/////////////////////////////////////////////////////////
//
//  Input: 6       Output: 6
//
/////////////////////////////////////////////////////////